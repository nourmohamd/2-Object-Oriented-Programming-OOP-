#include <iostream>
#include <string.h>
using namespace std;
// Example:
class Student {
private:
    static int count;
    char name[20];
    int id;
    int first, second, final;
public:
    static void print() {
        cout<<Student::count<<endl;
    }
    Student():id(0) {
        cout<<"Empty Constructor"<<endl;
        strcpy_s(name, "No Name");
        first = second = final = 0;
        Student::count++;
        Student::print();
    }
};
int Student::count = 0;
int main() {
    // Static Member Function

    // Calling Example:
    Student::print();
    cout<<"Construct 2 Objects"<<endl;
    Student s1, s2;
    cout<<"Construct 3 Object3 { Array }"<<endl;
    Student arr[3];

    /*
        Properties:
        1- In Class If It Contents Variable Static Or Function Static
           , It Will Called It By Name_Class::Variable_Or_Function
    */

    return 0;
    system("PAUSE");
}
