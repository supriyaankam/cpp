//Implement Map and its Operations.
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> student;

    // Insert elements
    student[101] = "Alice";
    student[102] = "Bob";
    student[103] = "Charlie";

    // Display elements
    cout << "Map elements:\n";
    map<int, string>::iterator it;
    for (it = student.begin(); it != student.end(); ++it)
        cout << it->first << " -> " << it->second << endl;

    // Access
    cout << "\nStudent with ID 102: " << student[102] << endl;

    // Delete
    student.erase(101);

    // Size
    cout << "Size of map: " << student.size() << endl;

    return 0;
}


