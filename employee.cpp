#include <iostream>
using namespace std;

class Employee {
private:
    double salary;
    int empID;

public:
    string name;
    string department;

    // Constructor to initialize values
    Employee(string empName, string empDept, int id, double sal) {
        name = empName;
        department = empDept;
        empID = id;
        salary = sal;
    }

    // Setter for salary
    void setSalary(double sal) {
        salary = sal;
    }

    // Getter for salary
    double getSalary() {
        return salary;
    }

    // Method to display employee details
    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1("Alice", "HR", 101, 50000.0);
    e1.displayDetails();

    // Updating salary
    e1.setSalary(55000.0);
    cout << "\nUpdated Salary: " << e1.getSalary() << endl;

    return 0;
}

