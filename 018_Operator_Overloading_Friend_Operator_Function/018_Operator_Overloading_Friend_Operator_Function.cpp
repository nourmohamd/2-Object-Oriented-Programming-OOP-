#include <iostream>
using namespace std;
// Example:
class B {
private:
    int x, y;
public:
    B(int i=0,int j=0) {
        x = i;
        y = j;
    }
    // 1
    B operator+(B o1) {
        B o3;
        o3.x = x + o1.x;
        o3.y = y + o1.y;
        return o3;
    }
    // 2
    B operator+(int n) {
        B o3;
        o3.x = x + n;
        o3.y = y + n;
        return o3;
    }
    // print
    void print() {
        cout<<x<<" "<<y<<endl;
    }
    // This is for 3
    friend B operator+(int n, B o1);
};
// 3
B operator+(int n, B o1) {
    B o3;
    o3.x = n + o1.x;
    o3.y = n + o1.y;
    return o3;
}
int main() {
    // Operator Overloading Friend Operator Function
    /*
        Forms Of Calling In This Chapter:
        =================================
        1- o3 = o1 + o2 || o3 = o1.operator+(o2)
        2- o3 = o1 + n || o3 = o1.operator+(n)
        3- o3 = n + o1 || o3 = n.operator+(o1)
    */

    // Calling
    // 1
    B o1(2, 3), o2(4, 5);
    B o3;
    o3 = o1 + o2;
    o3.print();
    /*
        Output:
        =======
        6 8
    */

    // 2
    o3 = o1 + 20;
    o3.print();
    /*
        Output:
        =======
        22 23
    */

    // 3
    o3 = 10 + o2;
    o3.print();
    /*
        Output:
        =======
        14 15
    */


    return 0;
    system("PAUSE");
}
