#include "filetab.h"

FileTab::FileTab(QWidget *parent, QString path)
    : QWidget{parent}
{
    filePath = path;
}
