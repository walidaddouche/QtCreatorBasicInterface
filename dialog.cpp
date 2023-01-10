#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);
  //connect(sliderh,&QSlider::valueChanged,this,&Dialog::OnColorChange);
  //connect(sliders,&QSlider::valueChanged,this,&Dialog::OnColorChange);
  connect(HS,SIGNAL(valueChanged(int)),SLOT(OnColorChange()));
  connect(SS,SIGNAL(valueChanged(int)),SLOT(OnColorChange()));
   connect(VS,SIGNAL(valueChanged(int)),SLOT(OnColorChange()));
}


Dialog::~Dialog()
{
}

void Dialog::OnColorChange(){
    QColor color;
    color.setHsv(HS-> value(),SS->value(),VS->value());
    qDebug()<<"the color is "<<color;
    QPalette pal ;

    pal.setColor(QPalette::Window,color);
    colorFrame->setPalette(pal);


}
