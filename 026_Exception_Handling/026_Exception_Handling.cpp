#include <iostream>
using namespace std;
// Example 1: Exception With Class
class CException {
private:
    int arr[100];
public:
    CException() {
        for(int i=0;i<100;i++) {
            arr[i] = i;
        }
    }
    int getElement(int x);
    class Big {
    public:
        Big() {
        }
        void p() {
            cout<<"Big"<<endl;
        }
    };
    class Small {
    public:
        Small() {
        }
        void p() {
            cout<<"Small"<<endl;
        }
    };
};
int CException::getElement(int x) {
    if(x>=100) {
        throw Big();
    } else if(x<0) {
        throw Small();
    } else {
        return arr[x];
    }
}
int main() {
    // Exception Handling
    /*
        - It is a level after writing code
        - In this chapter we will think about values or errors that user makes it
        form:
        =====
        try {
            ....
            if true ( not found error in values entering by user )
            ....
        }
        catch(...) {
            ....
            if false ( there is an error in values entering by user )
            ....
        }
        Note1: Don't Put A Line Empty Between Try And Catch ===> Error
        Note2: When you want to use extenssion Please user cerr Instead cout
    */

    // Example 1:
    int hour;
    cin.exceptions(cin.failbit);
    try {
        cin>>hour;
        if(hour<0 || hour>60)
            throw "Error";
        cerr<<"The Time is "<<hour<<endl;

    }
    catch(const char n[]) {
        cerr<<n<<" Wrong Value\n"<<endl;
    }

    // Example 2:
    try {
        int answer;
        cerr<<"5 + 7 = ";
        cin>>answer;
        if(answer != 12)
            throw "Error";
        cerr<<"Good Answer"<<endl;
    }
    catch(const char n[]) {
        cerr<<"Exception : "<<n<<endl;
    }

    // Example 3:
    try {
        int Ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int index;
        cout<<"Enter An Index : ";
        cin>>index;
        if(index<0)
            throw "Error, Negative Index";
        else if (index>9)
            throw index;
        cerr<<Ar[index]<<endl;
    }
    catch(const char n[]) {
        cerr<<"Exception : "<<n<<endl;
    }
    catch(const int i) {
        cerr<<"Exception : "<<i<<endl;
    }


    // Called Example: Exception With Class
    int i = 0;
    CException cx;
    try {
        cerr<<"Enter Index To Extract A Value Of That Position : ";
        cin>>i;
        cerr<<cx.getElement(i);
    }
    catch(CException::Big b) {
        b.p();
    }

    catch(CException::Small s) {
        s.p();
    }











    return 0;
    system("PAUSE");
}
