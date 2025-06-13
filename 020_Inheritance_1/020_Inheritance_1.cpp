#include <iostream>
using namespace std;
// Example 1:
class Cpolygon {
protected:
    int width, height;
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
};
class Crectangle: public Cpolygon {
public:
    int area() {
        return (width * height);
    }
};
class Ctriangle: public Cpolygon {
public:
    int area() {
        return (width * height) / 2;
    }
};

// Example 2:
class A1 {
    int i;
protected:
    int j;
public:
    int k;
};
class B1: public A1 {
    int x;
public:
    int y;
    int get_i() {
        return i;
        // private can't get j value
    }
    int get_j() {
        return j;
    }
};

// Example 3:
class A2 {
    int i;
protected:
    int j;
public:
    int k;
};
class B2: A2 {
// Type of inheritance is private
int x;
public:
    int y;
    int get_j() {
        return j;
    }
};

// Example 4:
class Base {
    int i;
public:
    int j, k;
    void set_i(int i) {
        this->i = i;
    }
    int get_i() {
        return i;
    }
};
class Derived: private Base {
public:
    Base::j;// transform private to public
    Base::set_i();// transform private to public
    Base::get_i();// transform private to public
    Base::i;// Error transform private to private
};
int main() {
    // Inheritance Section 1 - One
    /*
        Section 1:
        ==========
        Base Class(father) ===> Derived Class(son)
        * - Pointer from father to son(from Base to Derived)

        Access identifiers:
        ===================
                        same-class      derived-class       non-membe
        1 - Public      yes             yes                 yes
        2 - Protected   yes             yes                 no
        3 - Private     yes             no                  no

        Note:
        =====
        the natural inheritance is <<public>>

        Note:
        =====
        If you don't write type of inheritance it will private <(by default)>
    */

    // Called Example 1:
    Crectangle rect;
    Ctriangle trgl;
    rect.set_values(10, 20);
    trgl.set_values(11, 22);
    cout<<rect.area()<<endl;
    cout<<trgl.area()<<endl;
    /*
        Output:
        =======
        200
        121
    */

    // Called Example 2:
    B1 op;
    op.i = 55; // No Private
    op.j = 15; // No Protected
    op.k = 2; // Yes Public
    op.x = 51; // No Private
    op.y = 35; // Yes Public

    // Called Example 3:
    B2 ob;
    ob.i = 10;
    ob.x = 20;
    ob.k = 30;
    /*
        Note:
        =====
        1 - if inheritance is public ===> that will be all attribute and methods on the same them
        2 - if inheritance is private ===> that will be all attribute and methods private
    */

    // Called Example 4:
    Derived dr;
    dr.i = 10;// Error Private
    dr.j = 20;// True
    dr.k = 30;// True


    return 0;
    system("PAUSE");
}
