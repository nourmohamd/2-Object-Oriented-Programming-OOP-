#include <iostream>
#include <string.h>
using namespace std;
// Example About Destructor:
class Rectangle {
private:
    int w, h;
public:
    Rectangle(int ww, int hh) {
        cout<<"Paramitriz Constructor"<<endl;
        w = ww;
        h = hh;
    }
    ~Rectangle() {
        cout<<"Destructed This Object"<<endl;
        cout<<"w = "<<w<<endl;
        cout<<"h = "<<h<<endl;
    }
};

// Example About Destructor:
class A {
private:
    int w, h;
public:
    A():w(0), h(0) {
        cout<<"Empty Constructor"<<endl;
    }
    A(int a, int b):w(a), h(b) {
        cout<<"Paramitriz Constructor"<<endl;
        A ob;
    }
    ~A() {
        cout<<"Destructed This Object"<<endl;
        cout<<"w = "<<w<<endl;
        cout<<"h = "<<h<<endl;
    }
};

// Example About Destructor
class Phone {
private:
    char name[20];
    char model[10];
    int price;
public:
    Phone():price(0) {
        cout<<"Empty Constructor"<<endl;
        strcpy_s(name, "No Name");
        strcpy_s(model, "No Model");
    }
    Phone(char n[], char m[], int p):price(p) {
        cout<<"Paramitriz Constructor"<<endl;
        strcpy_s(name, n);
        strcpy_s(model, m);
    }
    void print();
    ~Phone();
};
void Phone::print() {
    cout<<"The Name "<<name<<endl;
    cout<<"The Model "<<model<<endl;
    cout<<"The Price "<<price<<endl;
}
Phone::~Phone() {
    cout<<"Object Destructed"<<endl;
    print();
}

// Very Important Example
class Student {
private:
    char name[20];
    int id;
public:
    Student():id(0) {
        cout<<"Empty Constructor"<<endl;
        strcpy_s(name, "No Name");
    }
    ~Student() {
        cout<<"Destructed Object"<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Id "<<id<<endl;
    }
    void set_name_id(char n[], int i):id(i) {
        strcpy_s(name, n);
    }
    void print() {
        cout<<"Name "<<name<<endl;
        cout<<"Id "<<id<<endl;
    }
};
void F(Student s) {
    Student s1;
    s1 = s;
    s.set_name_id("Unknow", 0000);
    s.print();
    s1.print();
    // Note: Destrcutor Called Two Time In This Function ( For Parameter, For New Object )
}
int main() {
    // Destructor
    /*
        Properties Of Destructor:
        1- It name like name of class
        2- Doesn't Take any paramiter and Doesn't return any value and not void
        3- start with mark ~ (Tild)
        4- Delete Activation Object From Memory
        5- Destroies Objects From Down To Up
        6- Called Destructor When Close Cirly Brakets } ===> Function Main Constructor
    */

    // Called
    // Ex1
    Rectangle r1(1, 2), r2(3, 4);
    /*
    Output: ===> If Only Found This Objects In Main
    Paramitriz Constructor
    Paramitriz Constructor
    Destructed This Object
    w = 3
    h = 4
    Destructed This Object
    w = 1
    h = 2
    */

    // Ex2
    A a1, a2(11, 22);
    /*
    Output: ===> If Only Found This Objects In Main
    Empty Constructor
    Paramitriz Constructor
    Empty Constructor
    Destructed This Object
    w = 0
    h = 0
    Destructed This Object
    w = 11
    h = 22
    Destructed This Object
    w = 0
    h = 0
    */


    return 0;
    system("PAUSE");
}
