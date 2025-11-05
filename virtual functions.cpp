//Illustrate virtual functions.
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {   // Overrides base class virtual function
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shapePtr;     // Pointer to base class

    Circle c;
    Rectangle r;

    // Pointing to Circle
    shapePtr = &c;
    shapePtr->draw();    // Calls Circle's draw() due to virtual function

    // Pointing to Rectangle
    shapePtr = &r;
    shapePtr->draw();    // Calls Rectangle's draw()

    return 0;
}

