#include "../headers/basicglwidget.h"
#include <QOpenGLShaderProgram>
#include <QCoreApplication>
#include <QColorDialog>
#include <QPainter>
#include <math.h>

#include <iostream>

#define PI 3.14159f
#define DEG2RAD(degrees) degrees * PI / 180.0f
#define MAX(a, b) (a > b) ? a : b
#define MIN(a, b) (a < b) ? a : b

BasicGLWidget::BasicGLWidget(QWidget *parent) : QOpenGLWidget(parent)
{
	// To receive key events
	setFocusPolicy(Qt::StrongFocus);

	// Attributes initialization
	// Screen
	m_width = 500;
	m_height = 500;
	
	// Scene
	m_sceneCenter = glm::vec3(0.0f, 0.0f, 0.0f);
	m_sceneRadius = 50.0f;
	m_bkgColor = Qt::black;
	m_backFaceCulling = false;

	// Shaders
	m_program = nullptr;

	// FPS
	m_showFps = false;
	


	// TO DO: Initialize the other attributes
	//Camera
	m_ar = 1.0f;
	m_fov = PI / 3;
	m_fovIni = m_fov;
	m_zNear = 1.0f;
	m_zFar = 100.0f;
	m_radsZoom = 0.0f;
	m_xPan = 0.0f;
	m_yPan = 0.0f;

	m_spPan = 0.1f;
	m_spZoom = 0.5;

	m_minFov = 15.0f;
	m_maxFov = 175.0f;

	// Mouse
	m_state = M_NONE;

	m_xRot = 0.0f;
	m_yRot = 0.0f;
	m_xClick = 0;
	m_yClick = 0;

	m_spRot = PI / 180;

}

BasicGLWidget::~BasicGLWidget()
{
    cleanup();
}

QSize BasicGLWidget::minimumSizeHint() const
{
    return QSize(50, 50);
}

QSize BasicGLWidget::sizeHint() const
{
    return QSize(m_width, m_height);
}

void BasicGLWidget::cleanup()
{
	makeCurrent();
	
	glDisableVertexAttribArray(0);
	glDeleteBuffers(1, &m_VBOVerts);
	glDeleteBuffers(1, &m_VBONorms);
	glDeleteBuffers(1, &m_VBOCols);
	glDeleteVertexArrays(1, &m_VAO);
	
	if (m_program == nullptr)
        return;
    
	delete m_program;
    m_program = 0;
    
	doneCurrent();
}

void BasicGLWidget::initializeGL()
{
    // In this example the widget's corresponding top-level window can change
    // several times during the widget's lifetime. Whenever this happens, the
    // QOpenGLWidget's associated context is destroyed and a new one is created.
    // Therefore we have to be prepared to clean up the resources on the
    // aboutToBeDestroyed() signal, instead of the destructor. The emission of
    // the signal will be followed by an invocation of initializeGL() where we
    // can recreate all resources.
    connect(context(), &QOpenGLContext::aboutToBeDestroyed, this, &BasicGLWidget::cleanup);
    initializeOpenGLFunctions();
 	loadShaders();
	createBuffersScene();
	computeBBoxScene();
	projectionTransform();
	viewTransform();
}

void BasicGLWidget::paintGL()
{
	// FPS computation
	computeFps();

	// Paint the scene
	glClearColor(m_bkgColor.red() / 255.0f, m_bkgColor.green() / 255.0f, m_bkgColor.blue() / 255.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	if (m_backFaceCulling)
		glEnable(GL_CULL_FACE);

	// Bind the VAO to draw the scene
	glBindVertexArray(m_VAO);

	// Apply the geometric transforms to the scene (position/orientation)
	sceneTransform();

	// Draw the scene
	glDrawArrays(GL_TRIANGLES, 0, 6);

	// Unbind the vertex array
	glBindVertexArray(0);


	if (m_showFps)
		showFps();
}

void BasicGLWidget::resizeGL(int w, int h)
{
	m_width = w;
	m_height = h;
	
	glViewport(0, 0, m_width, m_height);
	m_ar = (float)m_width / (float)m_height;
	
	// We do this if we want to preserve the initial fov when resizing
	if (m_ar < 1.0f) {
		m_fov = 2.0f*atan(tan(m_fovIni / 2.0f) / m_ar) + m_radsZoom;
	}
	else {
		m_fov = m_fovIni + m_radsZoom;
	}

	// After modifying the parameters, we update the camera projection
	projectionTransform();
}

void BasicGLWidget::keyPressEvent(QKeyEvent *event)
{
	switch (event->key()) {
		case Qt::Key_B:
			// Change the background color
			std::cout << "-- AGEn message --: Change background color" << std::endl;
			changeBackgroundColor();
			break;
		case Qt::Key_F:
			// Enable/Disable frames per second
			m_showFps = !m_showFps;
			
			// TO DO: Show or hide the FPS information

			break;
		case Qt::Key_H:
			// Show the help message
			std::cout << "-- AGEn message --: Help" << std::endl;
			std::cout << std::endl;
			std::cout << "Keys used in the application:" << std::endl;
			std::cout << std::endl;
			std::cout << "-B:  change background color" << std::endl;
			std::cout << "-F:  show frames per second (fps)" << std::endl;
			std::cout << "-H:  show this help" << std::endl;
			std::cout << "-R:  reset the camera parameters" << std::endl;
			std::cout << "-F5: reload shaders" << std::endl;
			std::cout << std::endl;
			std::cout << "IMPORTANT: the focus must be set to the glwidget to work" << std::endl;
			std::cout << std::endl;
			break;
		case Qt::Key_R:
			// Reset the camera and scene parameters
			std::cout << "-- AGEn message --: Reset camera" << std::endl;
			resetCamera();
			break;
		case Qt::Key_F5: 
			// Reload shaders
			std::cout << "-- AGEn message --: Reload shaders" << std::endl;
			reloadShaders();
			break;
		default:
			event->ignore();
			break;
	}
}

void BasicGLWidget::mousePressEvent(QMouseEvent *event)
{

	m_xClick = event->x();
	m_yClick = event->y();

	// TO DO: Rotation of the scene and PAN
	switch (event->button())
	{
		case Qt::LeftButton:
			m_state = M_PAN;
			break;
		case Qt::RightButton:
			m_state = M_ROTATE;
			break;
		default:
			m_state = M_NONE;
			break;
	}

}

//Overrided functions?
void BasicGLWidget::mouseMoveEvent(QMouseEvent *event)
{
	makeCurrent();
	
	float dX = event->x() - m_xClick;
	float dY = event->y() - m_yClick;

	// TO DO: Rotation of the scene and PAN
	if (m_state != M_NONE)
	{
		switch (m_state)
		{
		case M_PAN:
			m_xPan += dX * m_spPan;
			m_yPan += -dY * m_spPan;
			viewTransform();
			break;
		case M_ROTATE:
			m_yRot += dX * m_spRot;
			m_xRot += dY * m_spRot;
			break;
		default:
			break;
		}

		
	}

	m_xClick = event->x();
	m_yClick = event->y();

	update();

}

void BasicGLWidget::mouseReleaseEvent(QMouseEvent *event)
{

	// TO DO: Rotation of the scene and PAN
	m_state = M_NONE;
}

void BasicGLWidget::wheelEvent(QWheelEvent* event)
{

	// TO DO: Change the fov of the camera to zoom in and out
	
	int numDegrees = event->delta() / 8;
	// Number of steps of the wheel
	//int numSteps = numDegrees / 15;

	// For each step, we zoom in or out 7.5 degrees
	float numRads = DEG2RAD(numDegrees / 2.0f);

	float min_fov = DEG2RAD(m_minFov);
	float max_fov = DEG2RAD(m_maxFov);

	if (min_fov <= m_fov && max_fov >= m_fov)
	{
		makeCurrent();

		float prev_fov = m_fov;
		float new_fov = m_fov + numRads * m_spZoom;

		new_fov = MAX(new_fov, min_fov);
		m_fov = MIN(new_fov, max_fov);

		m_radsZoom += m_fov - prev_fov;

		projectionTransform();
		update();
	}
}

void BasicGLWidget::loadShaders()
{
	// Declaration of the shaders
	QOpenGLShader vs(QOpenGLShader::Vertex, this);
	QOpenGLShader fs(QOpenGLShader::Fragment, this);

	// Load and compile the shaders
	vs.compileSourceFile("./shaders/basicgl.vert");
	fs.compileSourceFile("./shaders/basicgl.frag");

	// Create the program
	m_program = new QOpenGLShaderProgram;

	// Add the shaders
	m_program->addShader(&fs);
	m_program->addShader(&vs);

	// Link the program
	m_program->link();

	// Bind the program (we are gonna use this program)
	m_program->bind();

	// Get the attribs locations of the vertex shader
	m_vertexLoc = glGetAttribLocation(m_program->programId(), "vertex");
	m_normalLoc = glGetAttribLocation(m_program->programId(), "normal");
	m_colorLoc = glGetAttribLocation(m_program->programId(), "color");

	// Get the uniforms locations of the vertex shader
	m_transLoc = glGetUniformLocation(m_program->programId(), "sceneTransform");
	m_projLoc = glGetUniformLocation(m_program->programId(), "projTransform");
	m_viewLoc = glGetUniformLocation(m_program->programId(), "viewTransform");
}

void BasicGLWidget::reloadShaders()
{
	if (m_program == nullptr)
		return;
	makeCurrent();
	delete m_program;
	m_program = 0;
	loadShaders();
	update();
}

void BasicGLWidget::projectionTransform()
{
	// Set the camera type
	glm::mat4 proj(1.0f);
	
	
	m_zNear = m_sceneRadius;
	m_zFar = m_sceneRadius * 3;

	// TO DO: Set the camera parameters 
	proj = glm::perspective(m_fov, m_ar, m_zNear, m_zFar);

	// Send the matrix to the shader
	glUniformMatrix4fv(m_projLoc, 1, GL_FALSE, &proj[0][0]);

}

void BasicGLWidget::resetCamera()
{
	makeCurrent();

	// TO DO: Reset the camera/view parameters
	m_xPan = m_yPan = 0.0f;
	m_xRot = m_yRot = 0.0f;
	m_radsZoom = 0.0f;
	m_fov = m_fovIni;

	projectionTransform();
	viewTransform();

	update();

}

void BasicGLWidget::viewTransform()
{
	// Set the camera position
	glm::mat4 view(1.0f);


	// TO DO: Camera placement and PAN
	view = glm::translate(view, m_sceneCenter + glm::vec3(0.0f, 0.0f, -2.0f * m_sceneRadius)); //Set start position
	view = glm::translate(view, glm::vec3(m_xPan, m_yPan, 0));								//Pan translation
	//view = glm::translate(view, -m_sceneCenter);

	// Send the matrix to the shader
	glUniformMatrix4fv(m_viewLoc, 1, GL_FALSE, &view[0][0]);
}

void BasicGLWidget::changeBackgroundColor() 
{

	// TO DO: Change the background color
	QColorDialog colDialog;

	m_bkgColor = colDialog.getColor(Qt::white, nullptr);



}

void BasicGLWidget::createBuffersScene()
{

	//VAO

	glGenVertexArrays(1, &m_VAO);
	glBindVertexArray(m_VAO);

	//VBO vertex positions
	glm::vec3 v_pos[6] = {
		glm::vec3( 10.0f, 10.0f, 0.0f),		//0
		glm::vec3(-10.0f, 10.0f, 0.0f),		//1
		glm::vec3(-10.0f,-10.0f, 0.0f),		//2
		glm::vec3( 10.0f, 10.0f, 0.0f),		//0
		glm::vec3(-10.0f,-10.0f, 0.0f),		//2
		glm::vec3( 10.0f,-10.0f, 0.0f)		//3
	};

	glGenBuffers(1, &m_VBOVerts);
	glBindBuffer(GL_ARRAY_BUFFER, m_VBOVerts);
	glBufferData(GL_ARRAY_BUFFER, sizeof(v_pos), v_pos, GL_STATIC_DRAW);

	// Enable the attribute m_vertexLoc
	glVertexAttribPointer(m_vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(m_vertexLoc);

	//VBO vertex normals
	glm::vec3 v_normals[6] = {
		glm::vec3(0.0f, 1.0f, 0.0f),
		glm::vec3(0.0f, 1.0f, 0.0f),
		glm::vec3(0.0f, 1.0f, 0.0f),
		glm::vec3(0.0f, 1.0f, 0.0f),
		glm::vec3(0.0f, 1.0f, 0.0f),
		glm::vec3(0.0f, 1.0f, 0.0f)
	};

	glGenBuffers(1, &m_VBONorms);
	glBindBuffer(GL_ARRAY_BUFFER, m_VBONorms);
	glBufferData(GL_ARRAY_BUFFER, sizeof(v_normals), v_normals, GL_STATIC_DRAW);

	glVertexAttribPointer(m_normalLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(m_normalLoc);

	//VBO vertex colors
	glm::vec4 v_colors[6] = {
		glm::vec4(1.0f, 1.0f, 0.0f, 1.0f),
		glm::vec4(0.0f, 1.0f, 0.0f, 1.0f),
		glm::vec4(0.0f, 0.0f, 1.0f, 1.0f),
		glm::vec4(1.0f, 1.0f, 0.0f, 1.0f),
		glm::vec4(0.0f, 0.0f, 1.0f, 1.0f),
		glm::vec4(1.0f, 0.0f, 0.0f, 1.0f),
	};

	glGenBuffers(1, &m_VBOCols);
	glBindBuffer(GL_ARRAY_BUFFER, m_VBOCols);
	glBufferData(GL_ARRAY_BUFFER, sizeof(v_colors), v_colors, GL_STATIC_DRAW);

	glVertexAttribPointer(m_colorLoc, 4, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(m_colorLoc);

	//Unbind VAO
	glBindVertexArray(0);

}

void BasicGLWidget::computeBBoxScene()
{
	// Right now we have just a quad of 20x20x0
	m_sceneRadius = sqrt(20 * 20 + 20 * 20)/2.0f;
	m_sceneCenter = glm::vec3(0.0f, 0.0f, 0.0f);
}

void BasicGLWidget::sceneTransform()
{
	glm::mat4 geomTransform(1.0f);


	// TO DO: Rotations of the scene // Using Euler angles
	geomTransform = glm::translate(geomTransform, m_sceneCenter);

	geomTransform = glm::rotate(geomTransform, m_xRot, glm::vec3(1.0f, 0.0f, 0.0f));
	geomTransform = glm::rotate(geomTransform, m_yRot, glm::vec3(0.0f, 1.0f, 0.0f));

	geomTransform = glm::translate(geomTransform, -m_sceneCenter);

	// Send the matrix to the shader
	glUniformMatrix4fv(m_transLoc, 1, GL_FALSE, &geomTransform[0][0]);
}

void BasicGLWidget::computeFps() 
{

	// TO DO: Compute the FPS
	

}

void BasicGLWidget::showFps()
{
	
	// TO DO: Show the FPS
	QPainter painter(this);

	painter.drawText(0.0f, 10.0f, "fps:  ");

}