#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow> // provides a main application window

QT_BEGIN_NAMESPACE
namespace Ui {
class Notepad; // Declare Notepad class in the Ui Namespace.
}
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT // macro that declares our class as a Qt Object. (pro: class & slot names can be
    // queried at runtime)

public:
    Notepad(QWidget *parent = nullptr); // 0 (nullptr) because it's a top-level widget.
    ~Notepad(); // virtual destructor
    void newDocument();
    void open();
    void save();
    void saveAs();
    void print();
    void selectFont();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionPrint_triggered();

    void on_actionFont_triggered();

private:
    Ui::Notepad *ui; // pointer to the Notepad UI class
    QString currentFile;
};
#endif // NOTEPAD_H
