//Implement pure virtual function and calculate the area of 
//different shapes by using abstract class.
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;   // =0 makes it a pure virtual function
};

// Derived class 1
class Circle : public Shape {
    float radius;
public:
    Circle(float r){ 
		radius = r; 
	}

    void area() override {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

// Derived class 3
class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() override {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* shape;  // Base class pointer

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 8);

    // Calculate areas
    shape = &c;
    shape->area();

    shape = &r;
    shape->area();

    shape = &t;
    shape->area();

    return 0;
}
