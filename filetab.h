#ifndef FILETAB_H
#define FILETAB_H

#include <QWidget>

class FileTab : public QWidget
{
    Q_OBJECT
public:
    QString filePath;
    explicit FileTab(QWidget *parent, QString path);

signals:
};

#endif // FILETAB_H
