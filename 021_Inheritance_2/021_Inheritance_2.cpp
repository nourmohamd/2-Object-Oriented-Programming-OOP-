#include <iostream>
#include <string.h>
using namespace std;
// Example 1:
class Mother {
public:
    Mother() {
        cout<<"Mother: Empty Constructor"<<endl;
    }
    Mother(int a) {
        cout<<"Mother: Paramitrize Constructor = "<<a<<endl;
    }
};
class Daughter: public Mother {
public:
    Daughter() {
        cout<<"Daughter: Empty Constructor"<<endl;
    }
    Daughter(int a) {
        cout<<"Daughter: Paramitrize Constructor = "<<a<<endl;
    }
};

// Example 2:
class Mother2 {
public:
    Mother2() {
        cout<<"Mother: Empty Constructor"<<endl;
    }
    Mother2(int a) {
        cout<<"Mother: Paramitrize Constructor = "<<a<<endl;
    }
};
class Daughter2: public Mother2 {
public:
    Daughter2() {
        cout<<"Daughter: Empty Constructor"<<endl;
    }
    Daughter2(int a):Mother2(a) {
        cout<<"Daughter: Paramitrize Constructor = "<<a<<endl;
    }
};

// Example 3: Multiple Inheritance
class Name {
    char n[20];
protected:
    void set_name(char n[]) {
        strcpy_s(this->n, n);
    }
    void print_n() {
        cout<<n<<endl;
    }
};
class Id {
    int id;
protected:
    void set_id(int id) {
        this->id = id;
    }
    void get_id() {
        cout<<id<<endl;
    }
};
class Student: public Name, public Id {
public:
    Student(char n[], int id) {
        set_name(n);
        set_id(id);
    }
    void print() {
        print_n();
        get_id();
    }
};
int main() {
    // Inheritance Section 2 - Two
    /*
        * There are many things the classes automatickly Inherited From His Father (Base)
        Such As:
        ========
        1 - Constructor && Destructor
        2 - Operator = () Number
        3 - Friend

        Points Of This Lesson:
        ======================
        1 - things the classes automatickly Inherited From His Father (Base)
        2 - How can you Make Type of inheritance Constructor From Father is Paramitrize Note Empty By Default
        3 - Multiple Inheritance ( More Class ) ===> C Has Two Fathers ( A And B )
    */

    // Called Example 1:
    Daughter d1;
    Daughter d2(10);
    /*
        Output:
        =======
        Mother: Empty Constructor
        Daughter: Empty Constructor
        Mother: Empty Constructor
        Daughter: Paramitrize Constructor = 10
    */
    // Note: In the first the object called mother constructor then called his constructor

    // How can you Make Type of inheritance Constructor From Father is Paramitrize Note Empty
    // By Default

    // Called Example 2:
    Daughter2 d3;
    Daughter2 d4(10);
    /*
        Output:
        =======
        Mother: Empty Constructor
        Daughter: Empty Constructor
        Mother: Paramitrize Constructor = 10
        Daughter: Paramitrize Constructor = 10
    */

    // Called Example 3:
    Student s1("Mohamed Nour Abdo", 5379);
    s1.print();
    /*
        Output:
        =======
        Mohamed Nour Abdo
        5379
    */

    return 0;
    system("PAUSE");
}
