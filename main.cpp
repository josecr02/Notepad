#include "notepad.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Creates a Qt Application Object with the commands fiven
    Notepad w;
    w.show(); // make widget visible
    return a.exec(); // make QApplication enter event loop (like mouse presses & key strokes)/
}
