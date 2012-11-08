/*
#-------------------------------------------------------------------------------
# Author: Adnan Fanaswala
# Created: 26th October 2012
# Simple GUI created using Qt-Addin for Visual Studio
#-------------------------------------------------------------------------------
*/

#include "helloguiworld.h"

HelloGUIWorld::HelloGUIWorld(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

void HelloGUIWorld::on_pushButton_clicked() {

	//QPixmap pixmap(ui.leftImage->pixmap());
	QPixmap pixmapLeft = *ui.leftImage->pixmap();
	QPixmap pixmapRight = *ui.rightImage->pixmap();

    QMatrix imageRotationMatrix;
    imageRotationMatrix.rotate(90);

    pixmapLeft = pixmapLeft.transformed(imageRotationMatrix);
	pixmapRight = pixmapRight.transformed(imageRotationMatrix);

    ui.leftImage->setPixmap(pixmapLeft);
	ui.rightImage->setPixmap(pixmapRight);
	
}

void HelloGUIWorld::on_horizontalSlider_valueChanged() {

	double sliderValue = ui.horizontalSlider->value();
	ui.label->setNum(sliderValue); //Changes the number on the Text-label to match the slider
}

//Load the left image
void HelloGUIWorld::on_leftImageLoadButton_clicked(){

    QFileDialog dialog(this); //Creates a File Selection Dialog
    dialog.setNameFilter(tr("Images (*.png *.gif *.jpg)")); //Filters the file-types to select
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select Left Image File"), 
                                                    "D:/",
                                                     tr("Images (*.png *.gif *.jpg)"));
	
	ui.leftImage->setPixmap(fileName); //Change the left view
}

void HelloGUIWorld::on_rightImageLoadButton_clicked(){

	QFileDialog dialog(this); //Creates a File Selection Dialog
    dialog.setNameFilter(tr("Images (*.png *.gif *.jpg)")); //Filters the file-types to select
    dialog.setViewMode(QFileDialog::Detail);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select Right Image File"), 
                                                    "D:/",
                                                     tr("Images (*.png *.gif *.jpg)"));
	
	ui.rightImage->setPixmap(fileName); //Change the right view
}

HelloGUIWorld::~HelloGUIWorld()
{

}
