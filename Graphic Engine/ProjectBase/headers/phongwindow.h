#include <QWidget>
#include "ui_phongwindow.h"

class MainWindow;
class PhongGLWidget;

class PhongWindow : public QWidget
{
	Q_OBJECT

public:
	PhongWindow(MainWindow* mw);
	~PhongWindow();

private slots:
	void dockUndock();
	void loadModel();
	void changeCameraType(int);

private:
	Ui::PhongWindow m_ui;
	MainWindow* m_mainWindow;
	PhongGLWidget* m_glWidget;

	QVBoxLayout* layoutFrame;
};
