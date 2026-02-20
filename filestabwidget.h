#ifndef FILESTABWIDGET_H
#define FILESTABWIDGET_H

#include <QTabWidget>

class FilesTabWidget : public QTabWidget
{
    Q_OBJECT
public:
    FilesTabWidget(QWidget *parent);

    void tabSelect(int index);
    void openFile(QString fullPath, QString fileName);
};

#endif // FILESTABWIDGET_H
