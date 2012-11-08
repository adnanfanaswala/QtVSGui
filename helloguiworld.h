/*
#-------------------------------------------------------------------------------
# Author: Adnan Fanaswala
# Created: 26th October 2012
# Simple GUI created using Qt-Addin for Visual Studio
#-------------------------------------------------------------------------------
*/

#ifndef HELLOGUIWORLD_H
#define HELLOGUIWORLD_H

#include <QtGui/QMainWindow>
#include <QtGui>
#include "ui_helloguiworld.h"

class HelloGUIWorld : public QMainWindow
{
	Q_OBJECT

public:
	HelloGUIWorld(QWidget *parent = 0, Qt::WFlags flags = 0);
	~HelloGUIWorld();

private:
	Ui::HelloGUIWorldClass ui;

public slots:
		void on_pushButton_clicked();
		void on_horizontalSlider_valueChanged();

		void on_leftImageLoadButton_clicked();
		void on_rightImageLoadButton_clicked();
};

#endif // HELLOGUIWORLD_H
