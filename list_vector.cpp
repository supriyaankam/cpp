//Implement List, Vector and its Operations.
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    // -------------------- VECTOR OPERATIONS --------------------
    cout << "===== VECTOR OPERATIONS =====" << endl;
    vector<int> v;

    // Insertion
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Vector elements: ";
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    // Deletion
    v.pop_back();
    cout << "After pop_back(): ";
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // Size of vector
    cout << "Size of vector: " << v.size() << endl;

    // Insert element at specific position
    v.insert(v.begin() + 1, 15);
    cout << "After inserting 15 at position 1: ";
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // -------------------- LIST OPERATIONS --------------------
    cout << "\n===== LIST OPERATIONS =====" << endl;
    list<int> l;

    // Insertion
    l.push_back(100);
    l.push_back(200);
    l.push_front(50);

    cout << "List elements: ";
    for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // Deletion
    l.pop_front();
    cout << "After pop_front(): ";
    for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // Insert element in between
    list<int>::iterator it = l.begin();
    ++it; // Move iterator to second position
    l.insert(it, 150);
    cout << "After inserting 150: ";
    for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // Remove specific element
    l.remove(200);
    cout << "After removing 200: ";
    for (list<int>::iterator i = l.begin(); i != l.end(); ++i)
        cout << *i << " ";
    cout << endl;

    // Size of list
    cout << "Size of list: " << l.size() << endl;

    return 0;
}

