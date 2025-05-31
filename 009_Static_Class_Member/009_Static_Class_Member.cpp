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
    Student():id(0) {
        cout<<"Empty Constructor"<<endl;
        strcpy_s(name, "No Name");
        first = second = final = 0;
        count++;
        cout<<"The Number Student Is "<<Student::count<<endl;
    }
    ~Student();
};
// For Build Destructor
Student::~Student() {
    cout<<"Object Destructed"<<endl;
}
// For Give Value For Static Variable In <<Class>>
int Student::count = 0;
int main() {
    // Static Class Member

    // Calling Class
    Student s1, s2;
    Student s3[3];


    return 0;
    system("PAUSE");
}
