#ifndef DIALOG_H
#define DIALOG_H

#include "ui_dialog.h"

#include <QDialog>

class Dialog : public QDialog, private Ui::Dialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

 private slots :
    void OnColorChange();
};
#endif // DIALOG_H
