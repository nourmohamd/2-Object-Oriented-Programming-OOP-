#include <iostream>
using namespace std;
// Example 1:
// Example About Abstract Class
class A {
protected:
    int a, b;
public:
    void set_values(int a, int b) {
        this->a = a;
        this->b = b;
    }
    virtual int area(void) = 0;
};
class B: public A {
public:
    int area() {
        return a * b;
    }
};
class C: public A {
public:
    int area(void) {
        return a * b - 10;
    }
};

// Example 2: Very Important
class D {
protected:
    int a, b;
public:
    void set_values(int a, int b) {
        this->a = a;
        this->b = b;
    }
    virtual int area(void) = 0;
    void print_area(void) {
        cout<<this->area()<<endl;
    }
};
class E: public D {
public:
    int area() {
        return a + b;
    }
};
class F: public D {
public:
    int area() {
        return a + b + 2;
    }
};
class G: public D {
public:
    int area() {
        return a + b + 10;
    }
};
int main() {
    // Polymorphism Section 2 - Two
    /*
        Type Of Polymorphism:
        =====================
        1 - Early Binding ===> When You Can Know The Pointer RelationShips With Object Quickly
                               Such As A *p1 = &aa;
        2 - Late Binding ===> When We RelationShips The Pointer With Object A Difficult Way ===>
                               Such As A For Loop
    */

    // Called Example 1:
    A *p1, *p2;
    B b;
    C c;
    b.set_values(100, 200);
    c.set_values(1000, 2000);
    p1 = &b;
    p2 = &c;
    cout<< p1->area() <<endl;
    cout<< p2->area() <<endl;
    /*
        Output:
        =======
        20000
        1999990
    */

    // Called Example 2:
    D *p21, *p22, *p23;
    E e;
    F f;
    G g;
    p21 = &e;
    p22 = &f;
    p23 = &g;
    p21->set_values(10, 22);
    p22->set_values(11, 21);
    p23->set_values(1, 2);
    p21->print_area();
    p22->print_area();
    p23->print_area();
    /*
        Output:
        =======
        32
        34
        13
    */


    return 0;
    system("PAUSE");
}
