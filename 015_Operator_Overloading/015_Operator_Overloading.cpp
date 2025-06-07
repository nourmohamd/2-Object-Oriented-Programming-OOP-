#include <iostream>
using namespace std;
// Example For Operator + - / * Only Replace + To * Or - Or / :
class C {
private:
    int x, y;
public:
    C() {
        x = y = 0;
        cout<<"Empty Constructor"<<endl;
    }
    C(int a1, int a2) {
        x = a1;
        y = a2;
        cout<<"Paramitrize Constructor"<<endl;
    }
    void set_values(int aa, int bb) {
        x = aa;
        y = bb;
        cout<<"Set Values"<<endl;
    }
    void print() {
        cout<<x<<" "<<y<<endl;
    }
    // Method 1: a3.add(a1, a2)
    // =========
    void add1(C c1, C c2) {
        x = c1.x + c2.x;
        y = c1.y + c2.y;
    }
    // Method 2: a3 = a1.add2(a2)
    // =========
    C add2(C c1) {
        C c3;
        c3.x = x + c1.x;
        c3.y = y + c1.y;
        return c3;
    }
    // Method 3: Either a3 = a1 + a2 Or a3 = a1.operator+(a2)
    // =========
    C operator+(C c1) {
        C c3;
        c3.x = x + c1.x;
        c3.y = y + c1.y;
        return c3;
    }
};
int main() {
    // Operator Overloading
    /*
        It Uses For Execute Operators On Objects In C++

        In This Chapter You Will Learn + - / * In Objects:
        ==================================================

    */

    // Called Method 1:
    C a1, a2, a3;
    a1.set_values(10, 12);
    a2.set_values(12, 10);
    a3.add1(a1, a2);
    a3.print();
    /*
        Output:
        =======
        Empty Constructor
        Empty Constructor
        Set Values
        Set Values
        22 22
    */

    // Called Method 2:
    C a4;
    a4 = a3.add2(a2);
    a4.print();
    /*
        Output:
        =======
        Empty Constructor
        Empty Constructor
        34 22
    */

    // Called Method 3:
    C a5;
    a5 = a4 + a3;
    a5.print();
    /*
        Output:
        =======
        Empty Constructor
        Empty Constructor
        56 54
    */

    return 0;
    system("PAUSE");
}
