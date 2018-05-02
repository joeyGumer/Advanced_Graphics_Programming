
HEADERS       = ./headers/definitions.h \
			./headers/glwidget.h \
            ./headers/window.h \
            ./headers/mainwindow.h \
            ./headers/logo.h \
			./headers/basicwindow.h \
			./headers/basicglwidget.h \
			./headers/phongglwidget.h \
			./headers/phongwindow.h \
			./headers/model.h \
			./headers/texturingglwidget.h \
			./headers/texturingwindow.h \

SOURCES       = ./sources/glwidget.cpp \
                ./sources/main.cpp \
                ./sources/window.cpp \
                ./sources/mainwindow.cpp \
                ./sources/logo.cpp \
			./sources/basicwindow.cpp \
			./sources/basicglwidget.cpp \
			./sources/phongglwidget.cpp \
			./sources/phongwindow.cpp \
			./sources/model.cpp \
			./sources/texturingglwidget.cpp \
			./sources/texturingwindow.cpp \


FORMS		=  ./forms/basicwindow.ui \
			./forms/phongwindow.ui \
			./forms/texturingwindow.ui \

QT           += widgets
CONFIG		 += console
INCLUDEPATH += ./glm

# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/hellogl2
INSTALLS += target