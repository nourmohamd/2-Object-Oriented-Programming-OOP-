#include <iostream>
#include <string.h>
using namespace std;
// Example About Empty Constructor
class Triangle {
private:
float base;
float height;
public:
    Triangle() {
        cout<<"First Constructor"<<endl;
        base = height = 0;
        // Or base = 0; height = 0;
    }
    void set_base_height(float b, float h) {
        base = b;
        height = h;
    }
    void print() {
        cout<<"Base "<<base<<endl;
        cout<<"Height "<<height<<endl;
    }
};
// Example About Paramitriz Constructor
class Triangle2 {
private:
    float base;
    float height;
public:
    Triangle2() {
        cout<<"First Constructor"<<endl;
        base = height = 0;
    }
    Triangle2(float b, float h) {
        cout<<"Paramitriz Constructor"<<endl;
        base = b;
        height = h;
    }
    void set_base_height(float b, float h) {
        base = b;
        height = h;
    }
    void print() {
        cout<<"Base "<<base<<endl;
        cout<<"Height "<<height<<endl;
    }
};
// Example About Student << Empty & Paramitriz >>
class Student {
private:
    char name[15];
    int id;
public:
    Student() {
        cout<<"First Constructor"<<endl;
        strcpy_s(name, "No Name");
        id = 0;
    }
    Student(char n[]) {
        cout<<"Paramitriz Constructor"<<endl;
        strcpy_s(name, n);
    }
    Student(char n[], int i = 0) {
        cout<<"Paramitriz Constructor"<<endl;
        strcpy_s(name, n);
        id = i;
    }
    void print() {
        cout<<"Name "<<name<<endl;
        cout<<"Id "<<id<<endl;
    }
};
// Example About Copy Constructor
class Copy {
private:
    int a1, a2;
public:
    Copy():a1(0), a2(0) {
        cout<<"First Constructor"<<endl;
    }
    Copy(int a, int b):a1(a), a2(b) {
        cout<<"Paramitriz Constructor"<<endl;
    }
    Copy(const Copy &ob) {
        cout<<"Copy Constructor"<<endl;
        a1 = ob.a1;
        a2 = ob.a2;
    }
    void print() {
        cout<<"a1 "<<a1<<endl;
        cout<<"a2 "<<a2<<endl;
    }
};
int main () {
    // Constructor in Class
    /*
    Types Of Constructor:
    1- Empty Constructor
    2- Paramitriz Constructor
    3- Copy Constructor
    Prperties Of Constructor:
    1- It name like name of Class
    2- Doesn't Return Value And Not Void ( not return, not void )
    3- Called At Every Define New Object
    */

    // Called
    // Ex1:
    Triangle t1, t2;
    t1.print();
    t2.set_base_height(10, 20);
    t2.print();
    /*
        Output:
        First Constructor
        First Constructor
        Base 0
        Height 0
        Base 10
        Height 20
    */

    // Ex2:
    Triangle2 t2_1, t2_2(10, 20), t2_3;
    t2_1.print();
    t2_2.print();
    t2_3.set_base_height(100, 200);
    t2_3.print();
    /*
        Output:
        First Constructor
        Paramitriz Constructor
        First Constructor
        Base 0
        Height 0
        Base 10
        Height 20
        Base 100
        Height 200
    */

    // Ex3:
    Copy c1(10,20), c2(c1);
    c1.print();
    c2.print();
    /*
        Output:
        Paramitriz Constructor
        Copy Constructor
        a1 10
        a2 20
        a1 10
        a2 20
    */
    return 0;
    system("PAUSE");
}
