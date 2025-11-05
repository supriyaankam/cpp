#include <iostream>
using namespace std;

// ------------------- Single Inheritance -------------------
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {  // Single Inheritance
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// ------------------- Multiple Inheritance -------------------
class Person {
public:
    void displayPerson() {
        cout << "I am a person." << endl;
    }
};

class Employee {
public:
    void displayEmployee() {
        cout << "I am an employee." << endl;
    }
};

class Manager : public Person, public Employee {  // Multiple Inheritance
public:
    void displayManager() {
        cout << "I am a manager." << endl;
    }
};

// ------------------- Multi-level Inheritance -------------------
class GrandParent {
public:
    void showGrandParent() {
        cout << "I am a grandparent." << endl;
    }
};

class Parent : public GrandParent {
public:
    void showParent() {
        cout << "I am a parent." << endl;
    }
};

class Child : public Parent {  // Multi-level Inheritance
public:
    void showChild() {
        cout << "I am a child." << endl;
    }
};

// ------------------- Hierarchical Inheritance -------------------
class Vehicle {
public:
    void showVehicle() {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void showCar() {
        cout << "This is a car." << endl;
    }
};

class Bike : public Vehicle {  // Hierarchical Inheritance
public:
    void showBike() {
        cout << "This is a bike." << endl;
    }
};

// ------------------- Hybrid Inheritance -------------------
class Student {
public:
    void showStudent() {
        cout << "I am a student." << endl;
    }
};

class Test : public Student {
public:
    void showTest() {
        cout << "Test scores available." << endl;
    }
};

class Sports {
public:
    void showSports() {
        cout << "Sports performance available." << endl;
    }
};

class Result : public Test, public Sports {  // Hybrid Inheritance
public:
    void showResult() {
        cout << "Overall result displayed." << endl;
    }
};

// ------------------- MAIN FUNCTION -------------------
int main() {
    cout << "\n--- Single Inheritance ---" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Manager m;
    m.displayPerson();
    m.displayEmployee();
    m.displayManager();

    cout << "\n--- Multi-level Inheritance ---" << endl;
    Child c;
    c.showGrandParent();
    c.showParent();
    c.showChild();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Car car;
    Bike bike;
    car.showVehicle();
    car.showCar();
    bike.showVehicle();
    bike.showBike();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    Result r;
    r.showStudent();
    r.showTest();
    r.showSports();
    r.showResult();

    return 0;
}

