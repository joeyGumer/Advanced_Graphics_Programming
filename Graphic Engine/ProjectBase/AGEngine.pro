
HEADERS       = ./headers/glwidget.h \
                ./headers/window.h \
                ./headers/mainwindow.h \
                ./headers/logo.h
SOURCES       = ./sources/glwidget.cpp \
                ./sources/main.cpp \
                ./sources/window.cpp \
                ./sources/mainwindow.cpp \
                ./sources/logo.cpp

QT           += widgets
CONFIG		 += console
INCLUDEPATH += ./glm

# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/hellogl2
INSTALLS += target