#include <iostream>
using namespace std;
// Full Example:
class U {
private:
    int x, y;
public:
    U():x(0), y(0) {
        cout<<"Empty Constructor"<<endl;
    }
    U(int a, int b) {
        cout<<"Paramitrize Constructor"<<endl;
    }
    void show() {
        cout<<x<<" "<<y<<endl;
    }
    // 1 - Operator++ ===> Postfix, Prefix
    // ++a1
    void operator++() {
        x++;
        y++;
    }

    // 2 - Operator++ ===> Prefix
    // a1 = ++a2
    U operator++() {
        x++;
        y++;
        return *this;
    }

    // 3 - Operator++ ===> Postfix
    // a1 = a2++
    U operator++(int) {
        U t;
        t = *this;
        t.x++;
        t.y++;
        return t;
    }

    // 4 - Operator- ===> Subtraction
    // a1 = -a1
    U operator-() {
        x = -x;
        y = -y;
        return *this;
    }

    // 5 - Operator! ===> For Not Operations (true , false)
    // if(!a1)
    bool operator!() {
        if(x==0&&y==0) {
            return 1;
        } else {
            return 0;
        }
        /// Or Write This return (x==0&&y==0);
    }

    // 6 - Operator+= ===> For Compound Assignment += , -= , *= , /=
    // a1 += a1 || a1.operator+=(o2)
    U operator+=(U a2) {
        x+=a2.x;
        y+=a2.y;
        return *this;
    }
};
int main() {
    // Operator Overloading Unary Operator
    /*
        Postfix ===> X++ print then additional
        prefix ===> ++X additional then print
    */

    // Implemntation Class:

    // 1- Prefix
    U a1, a2;
    ++a1;
    ++a2;
    a1.show();
    a2.show();
    /*
        Output:
        =======
        Empty Constructor
        Empty Constructor
        1 1
        1 1
    */

    // 2- prefix
    a1 = ++a1;
    a2 = ++a2;
    a1.show();
    a2.show();
    /*
        Output:
        =======
        Empty Constructor
        Empty Constructor
        2 2
        2 2
    */

    // 3- postfix
    a1 = a1++;
    a2 = a2++;
    a1.show();
    a2.show();
    /*
        Output:
        =======
        Empty Constructor
        Empty Constructor
        3 3
        3 3
    */

    // 4- Subtraction
    a1 = -a1;
    a2 = -a2;
    a1.show();
    a2.show();
    /*
        Output:
        =======
        -3 -3
        -3 -3
    */

    // 5- Not Operator
    if(!a1) {
        cout<<"No They are not zero"<<endl;
    } else {
        cout<<"Yes They are zero"<<endl;
    }
    /*
        Output:
        =======
        Yes They are zero
    */

    // 6- Compound Assignment
    a1 += a1;
    a2 += a2;
    a1.show();
    a2.show();
    /*
        Output:
        =======
        -6 -6
        -6 -6
    */



    return 0;
    system("PAUSE");
}
