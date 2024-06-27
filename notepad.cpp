#include "notepad.h"
#include "./ui_notepad.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QFontDialog>

Notepad::Notepad(QWidget *parent) // define Notepad Constructor
    : QMainWindow(parent) // call QMainWindow constructor (base class for the Notepad class)
    , ui(new Ui::Notepad) // create new UI class instance and assign it to the ui member
{
    ui->setupUi(this); // sets up the ui
}

Notepad::~Notepad()
{
    delete ui; // we dealloc the ui from memory
}

void Notepad::on_actionNew_triggered()
{
    newDocument();
}

void Notepad::newDocument()
{
    currentFile.clear(); // clear the buffer
    ui->textEdit->setText(QString());
}

void Notepad::on_actionOpen_triggered()
{
    open();
}

void Notepad::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file"); // opens dialog to select file
    if (fileName.isEmpty())
        return;
    QFile file(fileName); // selected file as parameter
    currentFile = fileName; // also store in the global variable
    if (!file.open(QIODevice::ReadOnly | QFile::Text)){ // open file with read-only
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file); // text stream
    QString text = in.readAll();
    ui->textEdit->setText(text); // contents of file are copied; fills buffer of the editor
    file.close();
}


void Notepad::on_actionSave_triggered()
{
    save();
}

void Notepad::save()
{
    QString fileName;
    // If we don't have a filename from before, get one.
    if (currentFile.isEmpty()){
        fileName = QFileDialog::getSaveFileName(this, "Save");
        if (fileName.isEmpty())
            return;
        currentFile = fileName;
    } else {
        fileName = currentFile;
    }
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}


// Can we better this and make it a code Editor for C++ with Syntax Highlighting! Very cool. Use Chatgpt


void Notepad::on_actionSave_as_triggered()
{
    saveAs();
}

void Notepad::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    if (fileName.isEmpty())
        return;
    QFile file (fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save the file: " + file.errorString());
        return;
    }

    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}


void Notepad::print()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printDialog)
    QPrintDialog dialog(&printDev, this); // launch dialog. 'Cancel' returns.
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif // QT_CONFIG(printDialog)
    ui->textEdit->print(&printDev);
#endif // QT_CONFIG(printer)
}

void Notepad::selectFont()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this); // save whether we selected to bool
    if (fontSelected)
        ui->textEdit->setFont(font); //set font

}



void Notepad::on_actionPrint_triggered()
{
    print();
}


void Notepad::on_actionFont_triggered()
{
    selectFont();
}

