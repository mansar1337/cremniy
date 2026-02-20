#include "filestabwidget.h"
#include "filetab.h"
#include "tooltab.h"
#include <qboxlayout.h>

FilesTabWidget::FilesTabWidget(QWidget *parent) {
    qDebug() << "FileTab!";
    connect(this, &QTabWidget::currentChanged, this, &FilesTabWidget::tabSelect);
}

void FilesTabWidget::tabSelect(int index){
    FileTab *tab = qobject_cast<FileTab*>(widget(index));
    if (!tab) return;
    qDebug() << "File:" << tab->filePath;
}

void FilesTabWidget::openFile(QString filePath, QString tabTitle){
    for (int i = 0; i < this->count(); ++i)
    {
        FileTab *t = qobject_cast<FileTab*>(this->widget(i));
        if (t && t->filePath == filePath)
        {
            this->setCurrentIndex(i);
            return;
        }
    }

    FileTab *filetab = new FileTab(nullptr, filePath);
    ToolTab *tooltabWidget = new ToolTab(filetab, filePath);
    QVBoxLayout *vlayout = new QVBoxLayout(filetab);
    tooltabWidget->setObjectName("toolTabWidget");
    vlayout->addWidget(tooltabWidget);
    vlayout->setContentsMargins(0,0,0,0);
    filetab->setLayout(vlayout);
    int new_tab = this->addTab(filetab, tabTitle);
    this->setCurrentIndex(new_tab);
}


