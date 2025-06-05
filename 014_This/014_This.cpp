#include <iostream>
using namespace std;
// Example1:
class Os {
public:
    void address() {
        cout<<"The Address Of Object Is "<<this<<endl;
    }
};
// Example2:
class Stu {
int id;
public:
void set_id(int id) {
    this->id = id;
}
void print_id() {
    cout<<this->id<<endl;
}
};
int main() {
    // This
    /*
        1- Used In Class Only
        2- Used To Find Address Of Object In Memory
        3- Finds Address Of Object Every Called This in Memory
    */

    // Called Example1:
    Os a1, a2, a3;
    a1.address();
    a2.address();
    a3.address();
    /*
        Output:
        The Address Of Object Is 0x35f9dffcaf
        The Address Of Object Is 0x35f9dffcae
        The Address Of Object Is 0x35f9dffcad
    */

    // Called Example2:
    Stu s1;
    s1.set_id(1000);
    s1.print_id();
    // Output: 1000

    return 0;
    system("PAUSE");
}
