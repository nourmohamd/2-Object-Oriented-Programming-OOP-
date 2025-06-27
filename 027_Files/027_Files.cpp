#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main() {
    // Files in C++
    /*
        Note: When you created a file in c++ it doesn't create before run for code
        Note: #include <fstream>

        Functions For Files:
        ====================
        1 - is_open() ===> Return true(Opened) or false(Closed)
        2 - ofstream ---> write(Array Of Character, Length It) ===> For Write In File
        3 - ifstream ---> read(Array Of Character, Length It) ===> For Readn From File
    */

    // Example: Create File And Save In It Hello World
    ofstream myfile1;
    myfile1.open("Noor1.txt");
    myfile1<<"Hello World"<<endl;
    myfile1.close();

    // Example :
    ofstream myfile2("Noor2.txt");
    myfile2<<"I Love You"<<endl;
    myfile2.close();

    // Example: is_open() function
    ofstream myfile3("Noor3.txt");
    if(myfile3.is_open()) {
        cout<<"It's Open"<<endl;
    } else {
        cout<<"It's Close"<<endl;
    }
    // Output: Opened
    myfile3.close();

    // Example: write function
    string name;
    int id;
    ofstream myfile4("Noor4.txt");
    cout<<"Enter Students Names :"<<endl;
    while(cin>>name>>id) {
        myfile4<<name<<" "<<id<<endl;
        // Click CTRL + Z For Out From Entering Values
    }

    // Example:
    int arr1[10];
    for(int i=0;i<10;i++) {
        arr1[i] = i * 10;
    }
    ofstream myfile5("Noor5.txt", ios::binary); // ios::binary ===> For Write And Read From The File
    // Either
    myfile5.write(reinterpret_cast<char*>(arr1), 10*sizeof(int));
    // Or
    // myfile5.write((char*)&arr1, sizeof arr1);
    myfile5.close();

    // Example:
    int arr2[20];
    ifstream myfile6("Noor5.txt", ios::binary);
    myfile6.read( (char*)&arr2, sizeof arr2 );
    for(int i=10;i<20;i++) {
        arr2[i] = i;
    }
    for(int i=0;i<20;i++) {
        cout<<arr2[i]<<endl;
    }
    myfile6.close();

    return 0;
    system("PAUSE");
}
