#include <iostream>
using namespace std;
// Example:
class Relational {
private:
    int x, y, z;
public:
    Relational() {
        x = y = z;
        cout<<"Empty Constructor"<<endl;
    }
    Relational(int i, int j, int k) {
        x = i;
        y = j;
        z = k;
        cout<<"Paramitrize Constructor"<<endl;
    }
    // 1 - Operator ==
    bool operator==(Relational b) {
        if(x == b.x&&y == b.y && z == b.z) {
            return true;
        } else {
            return false;
        }
    }
};
int main() {
    // Operator Overloading Relational Operator
    /*
        Operator: =, >=, <=, <, >, !=
        Note: All Relational The Same Form Only The Condition Diffrence
    */
    Relational a(10, 20, 30), b(10, 20, 30);
    if( a == b) {
        cout<<"A Equal B"<<endl;
    } else {
        cout<<"A Not Equal B"<<endl;
    }
    /*
        Output:
        =======
        Empty Constructor
        Empty Constructor
        A Equal B
    */




    return 0;
    system("PAUSE");
}
