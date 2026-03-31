#include <iostream>
#include <string.h>
using namespace std;
// Ex1:
struct Car {
    string name;
    string color;
    int maxspeed;
    int model;
};
// Ex2:
struct Student {
    string name;
    int id;
}s1, s2;
// Ex3:
struct Distance {
    int feet;
    double inches;
};
Distance sum_Distance(Distance d1, Distance d2) {
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    return result;
}
// Ex4: ===> For Concatination Struct With Class
struct Exam {
    float first;
    float second;
    float final;
    void f() {
        cout<<"Struct"<<endl;
    }
};
class Subject {
private:
    char name[20];
    Exam exam;
public:
    Subject() {
        strcpy_s(name, "No Name");
        exam = {0, 0, 0};
    }
    Subject(char n[], float fr, float se, float fi) {
        strcpy_s(name, n);
        exam.first = fr;
        exam.second = se;
        exam.final = fi;
        exam.f();
    }
    float total() {
        return exam.first + exam.second + exam.final;
    }
    void print() {
        cout<<name<<endl;
        cout<<exam.first<<endl;
        cout<<exam.second<<endl;
        cout<<exam.final<<endl;
        cout<<total()<<endl;
    }
};
// Ex5:
struct A {
    string name, color;
};
void input_name_color(A&a) {
    cin>>a.name;
    cin>>a.color;
}
// Ex6:
struct Name {
    string first_name;
    string last_name;
};
struct full_name {
    Name fullName;
};
int main() {
    // Structure
    /*
        You Can Create|Build DataType Accept Many DataType Like Class
    */
    Car c1;
    c1.name = "Kia";
    c1.color = "Blue";
    c1.maxspeed = 200;
    c1.model = 2005;
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<c1.maxspeed<<endl;
    cout<<c1.model<<endl;

    Car c2 = {"Sapa", "Red", 180, 2010};// Like Array
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<c2.maxspeed<<endl;
    cout<<c2.model<<endl;

    s1 = {"Mohamed", 5379};
    s2 = {"Ahmad", 123};
    cout<<s1.name<<endl;
    cout<<s1.id<<endl;
    cout<<s2.name<<endl;
    cout<<s2.id<<endl;

    // Note: For Compere
    // In Structure We Compere Property With Property In The Same Type
    // Don't Compere Two Structure With Them
    // Color With Name || Maxspeed With Model

    Distance x, y, z;
    x.feet = 10;
    y.feet = 20;
    x.inches = 10.3;
    y.inches = 11.56;
    z = sum_Distance(x, y);
    cout<<z.feet<<" "<<z.inches<<endl;

    Subject e("OOP", 25, 24, 49);
    e.print();

    A aa;
    input_name_color(aa);
    cout<<aa.name<<endl;
    cout<<aa.color<<endl;

    // Pointer With Struct
    Car new_car = {"Sapa", "Red", 180, 2010};
    Car *ptr;
    ptr = &new_car;
    cout<<ptr->color<<endl;// For Pointer To Any Property In Struct

    full_name f1;
    f1.fullName.first_name = "Mohamed";
    f1.fullName.last_name = "Nour";
    cout<<f1.fullName.last_name<<endl;
    cout<<f1.fullName.first_name<<endl;
    return 0;
    system("PAUSE");
}
