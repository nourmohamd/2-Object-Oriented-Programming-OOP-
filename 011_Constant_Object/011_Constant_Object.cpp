#include <iostream>
using namespace std;
// Example:
class Time {
private:
    int h, m, s;
public:
    void print () const {
        cout<<"The time is :"<<h<<":"<<m<<":"<<s<<endl;
    }
    void say_hello() {
        cout<<"Hello"<<endl;
    }
    Time() {
        printf("Empty Constructor\n");
        h = m = s = 0;
    }
    Time(int x1, int x2, int x3):h(x1), m(x2), s(x3) {
        printf("Paramitrize Constructor\n");
    }
    ~Time();
};
Time::~Time() {
    printf("Destructed Object\n");
}
int main() {
    // Constant Object
    /*
        Note:
        1- Constant Object Can Only Access To Constant Function/Methods
        2- Or Basic Object Can Access To All Function Constant/Basic

        Type Of Const Variable:
        1- const float pi = 3.14;
        2- #define pi 3.14

    */

    // Called Class:
    Time t1;
    t1.print();
    t1.say_hello();
    const Time t2;
    t2.print();
    const Time t3(10, 33, 59);
    t3.print();





    return 0;
    system("PAUSE");
}
