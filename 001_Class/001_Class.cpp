#include <iostream>
#include <string.h>
using namespace std;
// Class For Car
class Car {
private:
	char name[15], color[15];
	int maxspeed, model;
public:
    // Method For Set Name
	void set_name(char n[]) {
		strcpy_s(name, n);
	}
	// Method For Set Color
	void set_color(char c[]) {
		strcpy_s(color, c);
	}
	// Method For Set MaxSpeed
	void set_maxspeed(int mx) {
        maxspeed = mx;
	}
	// Method For Set Model
	void set_model(int m) {
        model = m;
	}
	// Method For Get Name
	char* get_name() {
        return name;
	}
	// Method For Get Color
	char* get_color() {
        return color;
	}
	// Method For Get MaxSpeed
	int get_maxspeed() {
        return maxspeed;
	}
	// Method For Get Model
	int get_model() {
        return model;
	}
	// Method For Print All Previous Values
	void print() {
        cout<<"Name "<<get_name()<<endl;
        cout<<"Color "<<get_color()<<endl;
        cout<<"Maxspeed "<<get_maxspeed()<<endl;
        cout<<"Model "<<get_model()<<endl;
	}
};
// Class For Triangle
class Triangle {
private:
    float base;
    float height;
public:
    void set_base_height(double a, double b) {
        base = a;
        height = b;
    }
    double area() {
        return 0.5*base*height;
    }
    void print() {
        cout<<"Base "<<base<<endl;
        cout<<"Height "<<height<<endl;
        cout<<"Area "<<area()<<endl;
    }
};
int main() {
	// Class ===> Car, Triangle
	// Car
	Car a;
	a.set_name("KeyRio");
	a.set_color("Black");
	a.set_maxspeed(300);
	a.set_model(2025);
	//================//
    cout<<a.get_name()<<endl;
    cout<<a.get_color()<<endl;
    cout<<a.get_maxspeed()<<endl;
    cout<<a.get_model()<<endl;
    //================//
    a.print();
    // Triangle
    Triangle b;
    b.set_base_height(12.5, 5.1);
    cout<<"Area "<<b.area()<<endl;
    b.print();

	return 0;
	system("PAUSE");
}
