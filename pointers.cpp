//Illustrate the use of object as a class member,
//pointer to a class, this pointer, and Virtual Base Class.
#include <iostream>
using namespace std;

// ---- Virtual Base Class Example ----
class Person {
public:
    string name;
    void showName() {
        cout << "Name: " << name << endl;
    }
};

// ---- Derived Classes (Virtual Inheritance) ----
class Student : virtual public Person {
public:
    int rollNo;
};

class Employee : virtual public Person {
public:
    int empID;
};

// ---- Class Containing Object as a Member ----
class Address {
public:
    string city;
    Address(string c) { city = c; }
};

// ---- Derived Class using all concepts ----
class Intern : public Student, public Employee {
    Address addr; // object as class member
public:
    Intern(string n, int r, int e, string c)
        : addr(c) // initialize member object
    {
        // using 'this' pointer
        this->name = n;
        this->rollNo = r;
        this->empID = e;
    }

    void display() {
        cout << "\n--- Intern Details ---\n";
        showName();
        cout << "Roll No: " << rollNo << endl;
        cout << "Emp ID: " << empID << endl;
        cout << "City: " << addr.city << endl;
    }
};

int main() {
    // Pointer to a class
    Intern *ptr = new Intern("Alice", 101, 5001, "Delhi");

    ptr->display(); // using pointer to access function

    delete ptr; // free memory
    return 0;
}

