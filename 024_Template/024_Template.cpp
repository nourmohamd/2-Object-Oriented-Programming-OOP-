#include <iostream>
using namespace std;
// Example 1: Sum Two Number
template <class t>
t sum(t x, t y) {
    return x + y;
}

// Example 2: Sum Two Number (int|float, int|float)
template <class t1,class t2>
t1 sum2(t1 x, t2 y) { // The Answer Is For First Parameter datatype
    return x + y;
}

// Example 3:
template <class f, class s>
f smaller(f a, s b) {
    return (a<b)?a:b;
}
int main() {
    // Template
    /*
        What is Template?
        =================
        When We Make A Function For Sum Two Number Such As:
        int sum (int a, double b) {
            return a + b;
        }
        If We Send A Double Number Such As : sum(2.5, 11) ===> It Maked ===> sum(2, 11)
        But
        Can We Make A Function Accept In first Parameter int|double And In second Parameter int|doubke
        The Answer Is ? YES
        In From This Idea The Template Come !!!
    */

    // Called Ex1:
    int x1 = 10, y1 = 20;
    double x2 = 15.5, y2 = 1.3;
    cout<<sum(x1, y1)<<endl;
    // Output: 30

    // Called Ex2:
    cout<<sum2(x2, y1)<<endl;
    // Output: 35.5

    // Called Ex3:
    cout<<smaller(x2, y2)<<endl;
    // The Type Of Return Is For The First Argument
    // Output: 1.3

    cout<<smaller<double>(x1, y2)<<endl;
    // x1 ===> double ===> Return ===> double
    // The Type Of Return Is double
    // Output: 1.3

    cout<<smaller<double, int>(x1, y1)<<endl;
    // x1 ===> double ===> Return ===> double
    // y1 ===> int ===> Return ===> double
    // The Type Of Return Is double
    // Output: 1.3

    return 0;
    system("PAUSE");
}
