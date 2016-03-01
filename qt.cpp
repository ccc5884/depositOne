
#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[])
{
    //object that makes program
    QApplication prog(argc, argv);
    //create pointer
    //pointer and objects are different
    QLabel *label = new QLabel("Gametime!");
    //show equals display
    label->show();


    //starts program
    return prog.exec();
}

// a::b = class A, object B
// b is a member from A;
// a::b
//tuna::b
//sauce::b;
//tuna.b
//b is a member from tuna
// a->b is same as (*a).b
//cannot use dot(.) on a pointer because
//its not an object




int main(int argc, char *argv[])
{

    QApplication prog(argc, argv);
   QPushButton *button = new QPushButton("Quit the program");
   //whenever the signal is pressed what happens in the slot happens
   QObject::connect(button, SIGNAL(clicked()), &prog, SLOT(quit()));
   button ->show();


    //starts program
    return prog.exec();
}


