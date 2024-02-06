TEMPLATE = app
CONFIG += console c++11 qt

QT += core gui widgets printsupport opengl
DEFINES += GLM_ENABLE_EXPERIMENTAL

SOURCES += \
    ../core/undohandler.cpp \
    ../core/undoaction.cpp \
    ../core/trackhandler.cpp \
    ../core/track.cpp \
    ../core/subfunction.cpp \
    ../core/smoothhandler.cpp \
    ../core/sectionhandler.cpp \
    ../core/section.cpp \
    ../core/secstraight.cpp \
    ../core/secgeometric.cpp \
    ../core/secforced.cpp \
    ../core/seccurved.cpp \
    ../core/secbezier.cpp \
    ../core/saver.cpp \
    ../core/nolimitsimporter.cpp \
    ../core/mnode.cpp \
    ../core/function.cpp \
    ../core/exportfuncs.cpp \
    ../osx/common.cpp \
    ../renderer/trackmesh.cpp \
    ../renderer/mytexture.cpp \
    ../renderer/myshader.cpp \
    ../renderer/myframebuffer.cpp \
    ../renderer/glviewwidget.cpp \
    ../ui/transitionwidget.cpp \
    ../ui/trackwidget.cpp \
    ../ui/trackproperties.cpp \
    ../ui/smoothui.cpp \
    ../ui/qcustomplot.cpp \
    ../ui/projectwidget.cpp \
    ../ui/optionsmenu.cpp \
    ../ui/objectexporter.cpp \
    ../ui/mytreewidget.cpp \
    ../ui/myqdoublespinbox.cpp \
    ../ui/mainwindow.cpp \
    ../ui/importui.cpp \
    ../ui/graphwidget.cpp \
    ../ui/graphhandler.cpp \
    ../ui/exportui.cpp \
    ../ui/draglabel.cpp \
    ../ui/conversionpanel.cpp \
    ../core/secnlcsv.cpp \
    tests.cpp

HEADERS += \
    ../core/undohandler.h \
    ../core/undoaction.h \
    ../core/trackhandler.h \
    ../core/track.h \
    ../core/subfunction.h \
    ../core/smoothhandler.h \
    ../core/sectionhandler.h \
    ../core/section.h \
    ../core/secstraight.h \
    ../core/secgeometric.h \
    ../core/secforced.h \
    ../core/seccurved.h \
    ../core/secbezier.h \
    ../core/saver.h \
    ../core/nolimitsimporter.h \
    ../core/mnode.h \
    ../core/function.h \
    ../core/exportfuncs.h \
    ../osx/common.h \
    ../renderer/trackmesh.h \
    ../renderer/mytexture.h \
    ../renderer/myshader.h \
    ../renderer/myframebuffer.h \
    ../renderer/glviewwidget.h \
    ../ui/transitionwidget.h \
    ../ui/trackwidget.h \
    ../ui/trackproperties.h \
    ../ui/smoothui.h \
    ../ui/qcustomplot.h \
    ../ui/projectwidget.h \
    ../ui/optionsmenu.h \
    ../ui/objectexporter.h \
    ../ui/mytreewidget.h \
    ../ui/myqdoublespinbox.h \
    ../ui/mainwindow.h \
    ../ui/importui.h \
    ../ui/graphwidget.h \
    ../ui/graphhandler.h \
    ../ui/exportui.h \
    ../ui/draglabel.h \
    ../ui/conversionpanel.h \
    ../lenassert.h \
    ../core/secnlcsv.h

FORMS += \
    ../ui/transitionwidget.ui \
    ../ui/trackwidget.ui \
    ../ui/trackproperties.ui \
    ../ui/smoothui.ui \
    ../ui/projectwidget.ui \
    ../ui/optionsmenu.ui \
    ../ui/objectexporter.ui \
    ../ui/mainwindow.ui \
    ../ui/importui.ui \
    ../ui/graphwidget.ui \
    ../ui/exportui.ui \
    ../ui/conversionpanel.ui

LIBS += -lgtest -lgtest_main -pthread
LIBS += -lGL
LIBS += -lGLU
LIBS += -lGLEW
LIBS += -lX11
LIBS += -L /usr/local/lib/
LIBS += -l3ds

INCLUDEPATH += ../
INCLUDEPATH += ../core
INCLUDEPATH += ../glm
INCLUDEPATH += ../ui
INCLUDEPATH += ../renderer
