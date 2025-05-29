#include <iostream>
using namespace std;
// Example1 About Days Of Week:
enum days{sat=1, sun, mon, tuth, wed, thur, fri};

// Example2 Class With Enum:
string day2[7] = {"sat","sun","mon","tuth","wed","thur","fri"};
class Week {
private:
// You Can Don't put private auto variables in first it is private
days dd[7];
public:
    void setDat(days w[]) {
        for(int i=0;i<7;i++) {
            dd[i] = w[i];
        }
    }
    void print() {
        for(int i=0;i<7;i++) {
            cout<<"The day is "<<dd[i]<<" _ "<< day2[i]<<endl;
        }
    }
};
int main() {
    // Enumeration
    /*
        We Write enum after using namespace std;
        properyies of enumeration:
        ==========================
        1- When you Want to print anything from enum print integer number
        2- first box in enum start indexing 0 not 1
        3- the elements are constant you can't enter then by users
    */
    // For Example 1:
    string day1[7] = {"sat","sun","mon","tuth","wed","thur","fri"};
    days m[7] = {sat, sun, mon, tuth, wed, thur, fri};
    for(int i=0;i<7;i++) {
        cout<<m[i]<<" _ "<<day1[i]<<endl;
    }
    /*
        Output:
        1 _ sat
        2 _ sun
        3 _ mon
        4 _ tuth
        5 _ wed
        6 _ thur
        7 _ fri
    */

    // For Example 2:
    days m2[7] = {sat, sun, mon, tuth, wed, thur, fri};
    Week w1;
    w1.setDat(m2);
    w1.print();
    /*
        Output:
        The day is 1 _ sat
        The day is 2 _ sun
        The day is 3 _ mon
        The day is 4 _ tuth
        The day is 5 _ wed
        The day is 6 _ thur
        The day is 7 _ fri
    */


    return 0;
     system("PAUSE");
}
