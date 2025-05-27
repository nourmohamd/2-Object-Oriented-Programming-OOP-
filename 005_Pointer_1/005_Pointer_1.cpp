#include <iostream>
using namespace std;
int main() {
    // Pointer Section 1
    /*
        Property For Pointer:
        1- The Pointer Relation With Storage In Memory
        2- The Pointer Is Third Type From DataType In Any Programming Language
        3- The Pointer Is The Way For Access To Address Of Variable
        4- The Pointer Is A Variable For Storage Address Of Another Variable
        5- Any Change On Value Of Pointer , It Will Changed On Variable
        6- namePointer ===> Get Address Of Variable
        7- &namePointer ===> Get Address Of Pointer In Memory
        8- *namePointer ===> Get Value Of Variable
        9- &Variable ===> Get Address Of Variable
    */

    // Ex1:
    int x1 = 0;
    cout<<&x1<<endl;
    // Address Of Variable

    // Ex2:
    int *ptr1;
    int x2 = 5;
    ptr1 = &x2;
    cout<<ptr1<<endl;
    // Address Of Variable
    cout<<*ptr1<<endl;
    // Value Of Variable
    cout<<&ptr1<<endl;
    // Address Of Pointer

    // Ex3:
    int x3 = 0;
    int *ptr2;
    ptr2 = &x3;
    *ptr2 = 200;
    cout<<*ptr2<<endl;
    // New Value 200
    cout<<x3<<endl;
    // New Value 200
    cout<<*ptr2<<" _ "<<x3<<endl;
    // 200 _ 200

    // Ex4:
    void *ptr3;
    float x4 = 2;
    ptr3 = &x4;
    cout<<&ptr3<<endl;
    // Address Of Variable
    // Note: ptr3 Can't Get Value By x4 Because It Not the same type

    // Ex5: Solution
    void *ptr4;
    float x5 = 2;
    ptr4 = &x5;
    float *i = static_cast<float*>(ptr4);
    cout<<i<<endl;
    // Address Of Variable
    cout<<*i<<endl;
    // Value Of Variable

    // Pointer With Array

    // Ex1:
    int a[5] = {1, 2, 3, 4, 5};
    cout<<a+0<<endl;
    // Address First Value
    cout<<*(a+0)<<endl;
    // Value First Value

    // Ex2:
    for(int i=0;i<5;i++) {
        cout<<(a+i)<<endl;
        cout<<*(a+i)<<endl;
    }

    // Ex3:
    int *p;
    p = &a[0];
    // Or p = a ===> because name of array points to first address box a ===> &a[0]
    for(int i=0;i<5;i++) {
        cout<<*(p+i)<<endl;
    }
    p = a;
    // Or
    for(int i=0;i<5;i++) {
        cout<<*(p)<<endl;
        p++;
    }
    p = a;
    // Or
    for(int i=0;i<5;i++) {
        cout<<*(p)<<endl;
        p+=2;
    }


    return 0;
    system("PAUSE");
}
