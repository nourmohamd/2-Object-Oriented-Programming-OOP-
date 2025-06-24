#include <iostream>
using namespace std;
// Example 1:
template <class T>
class Number {
    T first, second;
public:
    Number(T a, T b) {
        first = a;
        second = b;
    }
    T max();
};
template <class T>
T Number<T>::max() {
    return (first < second ? second : first);
}

// Example 2: Make A Special Class For Datatype
template <class A>
class A_Char {
public:
    A_Char(A x) {
        cout<<x<<" is not a character"<<endl;
    }
};
template<>
class A_Char<char> {
public:
    A_Char(char x) {
        cout<<x<<" is a character"<<endl;
    }
};
int main() {
    // Template Class

    // Called Example1:
    // ================
    Number <int>ob(12, 34);
    cout<<ob.max()<<endl;
    // Output: 34

    // Called Example2:
    A_Char <int>ob1(10);
    A_Char <char>ob2('T');
    /*
        Output:
        =======
        10 is not a character
        T is a character
    */



    return 0;
    system("PAUSE");
}
