#include <iostream>
using namespace std;
// Example 1: ===> Overloading Function
void s(int a) {
    cout<<"Integer: "<<a<<endl;
}
void s(double a) {
    cout<<"Double: "<<a<<endl;
}
void s(char a) {
    cout<<"Character: "<<a<<endl;
}
// Example 2: ===> Overriding Function
class A {
protected:
    int a, b;
public:
    void set_values(int A1, int A2) {
        a = A1;
        b = A2;
    }
    virtual int area(void) {
        return (0);
    }
};
class B: public A {
public:
    int area() {
        return a *b;
    }
};
class C: public A {
public:
    int area() {
        return (a * b) / 2;
    }
};
int main() {
    // Polymorphism Section 1 - One
    /*
        Polymorphism has two main section:
        ==================================
        1 - Overloading Function
            It is function that have the same name but it deffrent about them in
            parameter number or parameter datatype
        2 - Overriding Function
            It is function in Derived it's name is A
            and
            Assuming there is also function it's name is A in Base
            and
            if there is not function by name A in Base, You Should to create
                function By Virtual ===> It is a virtual function between
                me and a compiler
        [
            In this square pracits your first step:
            1 - Create A Pointer From << Base >> And RelationShips
            With An Object From Derived
            Note: You Can See All Methods And Attributes The Derived From This Pointer
        ]
    */
    A j1;
    B j2;
    C j3;
    A *p1, *p2, *p3;
    p1 = &j1;
    p2 = &j2;
    p3 = &j3;
    p1->set_values(4, 5);
    p2->set_values(10, 20);
    p3->set_values(14, 23);
    cout<<p1->area()<<endl;
    cout<<p2->area()<<endl;
    cout<<p3->area()<<endl;
    /*
        Output:
        =======
        0
        200
        161
    */

    /*
        Abstract Class Concept:
        =======================
        The Class Transforms From A Normally Class To Abstract Class
        If There is virtual int area(void) = 0; ===> In This Class
        It is a Virtual Between me And Compiler Means Function's Name
        area() In Base
        This is for explaination that function's name area() also in Derived Classes

        Note:
        =====
        You Doesn't Create From Abstract Class Objects, Only Pointers
    */





    return 0;
    system("PAUSE");
}
