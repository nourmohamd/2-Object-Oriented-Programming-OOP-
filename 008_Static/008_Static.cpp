#include <iostream>
using namespace std;
// Example1 for Static
void f1() {
    int x = 0;
    x++;
    cout<<x<<endl;
}
void f2() {
    static int x = 0;
    x++;
    cout<<x<<endl;
}
int main() {
    // Static
    /*
        Static Mean Anything static between datatype
        Note: The Static Save The Last Value Always
    */
    // Calling Ex1:
    f1();
    f1();
    // 1
    // 1

    // Calling Ex2:
    f2();
    f2();
    // 1
    // 2

    return 0;
    system("PAUSE");
}
