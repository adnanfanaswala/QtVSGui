/*
#-------------------------------------------------------------------------------
# Author: Adnan Fanaswala
# Created: 26th October 2012
# Simple GUI created using Qt-Addin for Visual Studio
#-------------------------------------------------------------------------------
*/

#include "helloguiworld.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HelloGUIWorld w;
	w.show();
	return a.exec();
}
