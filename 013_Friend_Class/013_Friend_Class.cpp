#include <iostream>
using namespace std;
// Example1:
class Square;
class Rectangle {
int width, height;
public:
    int area(void) {
        return (width * height);
    }
    void convert_to_square(Square s);
};
class Square {
int side;
public:
    void set_side(int x) {
        side = x;
    }
    friend class Rectangle;
};
void Rectangle::convert_to_square(Square s) {
    width = s.side;
    height = s.side;
}
int main() {
    // Friend Class
    /*
        It Is Two Or More Classes Friends With Them { They Can See all properties in them }
    */

    // Create Object:
    Rectangle r;
    Square s;
    s.set_side(10);
    r.convert_to_square(s);
    cout<<r.area()<<endl;




    return 0;
    system("PAUSE");
}
