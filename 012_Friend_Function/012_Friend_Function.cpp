#include <iostream>
using namespace std;
// Ex1:
class Num {
private:
    int a, b;
public:
    Num():a(0), b(0) {
        cout<<"Empty Constructor"<<endl;
    }
    Num(int aa, int bb):a(aa), b(bb) {
        cout<<"Paramitrize Constructor"<<endl;
    }
    friend int sum_a(Num n1);
};
int sum_a(Num n1) {
    return n1.a + n1.b;
}
// Ex2:
class Rectangle {
private:
    int width, height;
public:
    void set_width_height(int w, int h);
    int area() {
        return (width + height);
    }
    friend Rectangle duplicate(Rectangle n);
};
void Rectangle::set_width_height(int w, int h) {
    cout<<"Set Values For Member Private"<<endl;
    width = w;
    height = h;
}
Rectangle duplicate(Rectangle n) {
    Rectangle t1;
    t1.width = n.width*2;
    t1.height = n.height*2;
    return t1;
}
// Ex3: Sum Property From Class With Another Class
class Triangle;
class CRectangle {
private:
    int width, height;
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    friend sum(CRectangle cr, Triangle tr);
};
class Triangle {
private:
    int w, h;
public:
    Triangle(int a, int b) {
        w = a;
        h = b;
    }
    friend sum(CRectangle cr, Triangle tr);
};
int sum(CRectangle cr, Triangle tr) {
    return cr.width + tr.w;
}
int main() {
    // Friend Function
    /*
        What is this?
        =============
        This idea make for members private i can't see them out class
        for this make friend/method function for i can see them out class
    */

    // Ex1: Called sum_a For Class Num:
    Num n1(10, 20);
    cout<<sum_a(n1)<<endl;
    /*
        Output:
        =======
        Paramitrize Constructor
        30
    */

    // Ex2: Called duplicate For Class Rectangle
    Rectangle recta, rectb;
    recta.set_width_height(30, 50);
    cout<<recta.area()<<endl;
    rectb = duplicate(recta);
    cout<<rectb.area()<<endl;
    /*
        Output:
        =======
        Set Values For Member Private
        80
        160
    */

    // Ex3: Called Function For Sum Property From Two Classes
    CRectangle cr;
    cr.set_values(2, 3);
    Triangle t(8, 7);
    cout<<sum(cr, t)<<endl;

    return 0;
    system("PAUSE");
}
