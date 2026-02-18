#include "filetab.h"
#include "codeeditor.h"

FileTab::FileTab(QWidget *parent) {

    CodeEditor *codeEditorWidget = new CodeEditor();
    QWidget *emptyWidget1 = new QWidget();
    QWidget *emptyWidget2 = new QWidget();
    this->addTab(codeEditorWidget, "Code");
    this->addTab(emptyWidget1, "Hex");
    this->addTab(emptyWidget2, "Disassembler");

}
