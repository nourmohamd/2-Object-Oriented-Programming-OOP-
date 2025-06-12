#include <iostream>
using namespace std;
// Example: 1
class Distance {
private:
    int feet;
    int inches;
public:
    Distance() {
        feet = inches = 0;
        cout<<"Empty Constructor"<<endl;
    }
    Distance(int f, int i) {
        feet = f;
        inches = i;
        cout<<"Paramitrize Constructor"<<endl;
    }
    friend istream& operator>>(istream& input, Distance& a);
    friend ostream& operator<<(ostream& output, Distance& a);
};
// 1 - cin >> operator for object
istream& operator>>(istream& input, Distance& a) {
    input>>a.feet>>a.inches;
    return input;
}
// 2 - cout << operator for object
ostream& operator<<(ostream& output, Distance& a) {
    output<<"Feet = "<<a.feet<<endl<<"Inches = "<<a.inches<<endl;
    return output;
}
// Example: 2
class num {
private:
    int n;
public:
    num():n(0) {
        cout<<"Empty Constructor"<<endl;
    }
    num(int j):n(j) {
        cout<<"Paramitrize Constructor"<<endl;
    }
};
// Example: 3
class Arr {
private:
    int arr[3];
public:
    Arr() {
        for(int i=0;i<3;i++) {
            arr[i] = 0;
        }
        cout<<"Empty Constructor"<<endl;
    }
    // 3 - arr input and return values []
    int& operator[](int n) {
        return arr[n];
    }

};
int main() {
    // Operator Overloading [] cin cout

    // Example: 1
    Distance d1;
    // cin
    cin>>d1;
    // cout
    cout<<d1;

    // Example: 2
    // Attribution Object to variable and reverse
    num ob(20);
    int x = 10;
    x = ob;
    ob = x;
    cout<<x<<endl;

    // Example: 3
    Arr arr;
    cout<<arr[2]<<endl;
    arr[2] = 1000;
    cout<<arr[2]<<endl;
    /*
        Output:
        =======
        0
        1000
    */



    return 0;
    system("PAUSE");
}
