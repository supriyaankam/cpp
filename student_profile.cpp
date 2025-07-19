#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    string name;
    string branch;

    // Constructor to initialize all data
    Student(int r, float m, string n, string b) {
        rollNo = r;
        marks = m;
        name = n;
        branch = b;
    }

    // Setter for marks
    void setMarks(float m) {
        marks = m;
    }

    // Getter for marks
    float getMarks() {
        return marks;
    }

    // Method to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};


int main() {
    Student s1(101, 89.5, "Supriya", "CSE");
    s1.displayDetails();

    s1.setMarks(91.2);  
    cout << "\nUpdated Marks: " << s1.getMarks() << endl;

    return 0;
}

