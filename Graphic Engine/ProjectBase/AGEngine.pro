
HEADERS       = ./headers/glwidget.h \
                ./headers/window.h \
                ./headers/mainwindow.h \
                ./headers/logo.h \
				./headers/basicwindow.h \
			./headers/basicglwidget.h 

SOURCES       = ./sources/glwidget.cpp \
                ./sources/main.cpp \
                ./sources/window.cpp \
                ./sources/mainwindow.cpp \
                ./sources/logo.cpp \
				./sources/basicwindow.cpp \
				./sources/basicglwidget.cpp 

FORMS		=  ./forms/basicwindow.ui

QT           += widgets
CONFIG		 += console
INCLUDEPATH += ./glm

# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/hellogl2
INSTALLS += target