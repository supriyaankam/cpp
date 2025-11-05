//Illustrate the use of function template.
#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(5, 10) << endl;
    cout << "Addition of floats: " << add(3.5f, 2.8f) << endl;
    cout << "Addition of doubles: " << add(10.25, 4.75) << endl;
    cout << "Addition of characters: " << add('A', 'B') << endl; // ASCII sum

    return 0;
}

