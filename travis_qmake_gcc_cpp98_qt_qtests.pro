QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Shared files
SOURCES += my_dialog1.cpp my_dialog2.cpp
FORMS   += my_dialog1.ui  my_dialog2.ui
HEADERS += my_dialog1.h   my_dialog2.h
RESOURCES += travis_qmake_gcc_cpp98_qt_qtests.qrc

# Unique files
SOURCES += qtmain.cpp
