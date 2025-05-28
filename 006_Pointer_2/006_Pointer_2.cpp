#include <iostream>
#include <string.h>
using namespace std;
// Function With Pointer
int s(int *p) {
    *p = *p + 1;
    return *p;
}
// Class + Pointer
class CRectangle {
private:
    int *width, *height;
public:
    CRectangle() {
        width = new int;
        height = new int;
        *width = *height = 0;
    }
    CRectangle(int a, int b);
    ~CRectangle();
    int area() {
        return *width * *height;
    }
};
CRectangle::CRectangle(int a, int b) {
    width = new int;
    height = new int;
    *width = a;
    *height = b;
}
CRectangle::~CRectangle() {
    cout<<"Object Destructed"<<endl;
    delete width;
    delete height;
}
// Array From Object And Pointer From Object
class Student {
private:
    char name[20];
    int id;
public:
    Student():id(0) {
        cout<<"Empty Constructor"<<endl;
    }
    Student(char n[], int i):id(i) {
        cout<<"Paramitrize Constructor"<<endl;
        strcpy_s(name, n);
    }
    void print();
};
void Student::print() {
    cout<<name<<endl;
    cout<<id<<endl;
    cout<<"================="<<endl;
}
int main () {
    // Pointer Section 2
    int x = 5;
    cout<<s(&x)<<endl;
    // 6
    cout<<x<<endl;
    // 6
    int *ptr1;
    ptr1 = &x;
    cout<<s(ptr1)<<endl;
    // 7
    cout<<x<<endl;
    // 7


    // New - Delete In Pointers
    // We Use New-Delete When Pointer Doesn't have a variable for relationship with it
    // Ex1:
    int *ptr2;
    ptr2 = new int;
    *ptr2 = 100;
    cout<<ptr2<<endl;
    // Address
    delete ptr2;
    cout<<*ptr2<<endl;
    // Random Value Because You Removed It

    // Ex2:
    int *ptr3, *ptr4;
    ptr3 = new int;
    *ptr3 = 1000;
    ptr4 = new int;
    *ptr4 = 2000;
    cout<<*ptr3 + *ptr4<<endl;
    delete ptr3;
    delete ptr4;

    // Ex3: Class(In Top) + Pointer
    CRectangle recta(3, 5), rectb(10, 20);
    cout<<"Area "<<recta.area()<<endl;
    cout<<"Area "<<rectb.area()<<endl;

    // Ex4: Array From Object And Pointer From Object
    // Section 1:
    Student s1("Noor", 1234), s2("Mustafa", 5412);
    Student arr[3];
    for(int i=0;i<3;i++) {
        arr[i].print();
    }
    // Section 2:
    Student s3("Noor", 1234), s4("Mustafa", 5412);
    Student arr2[3] = {Student("Ahmad", 1234512)};
    for(int i=0;i<3;i++) {
        arr2[i].print();
    }
    // Section 3:
    Student s5("Montaser", 5477), s6("Ali", 5412);
    Student arr3[3] = {s5, s6};
    // Note: The Box In arr3 Doesn't Call Constructor Because It Called Constructor At Initiallization
    Student *pointer_;
    pointer_ = arr3;
    // Or pointer_ = &arr3[0];
    for(int i=0;i<3;i++) {
        // 1
        (pointer_+i)->print();
        // 2
        // (pointer_++)->print();
    }
    // Section 4:
    Student s7("Montaser", 5477), s8("Ali", 5412);
    Student arr4[3] = {s7, s8};
    for(int i=0;i<3;i++) {
        arr4[i].print();
    }

    return 0;
    system("PAUSE");
}
