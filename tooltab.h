#ifndef TOOLTAB_H
#define TOOLTAB_H

#include <QTabWidget>

class QVBoxLayout;
class QSyntaxStyle;
class QComboBox;
class QCheckBox;
class QSpinBox;
class QCompleter;
class QStyleSyntaxHighlighter;
class QCodeEditor;

class ToolTab : public QTabWidget
{
    Q_OBJECT
public:
    ToolTab(QWidget *parent, QString path);
private:

    void loadStyle(QString path, QString name);

    QCodeEditor* m_codeEditor;

    QMap<QString, QCompleter*> m_completers;
    QMap<QString, QStyleSyntaxHighlighter*> m_highlighters;
    QMap<QString, QSyntaxStyle*> m_styles;
};

#endif // TOOLTAB_H
