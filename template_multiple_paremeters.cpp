//Implement class templates with multiple parameters
#include <iostream>
using namespace std;

// Class template with multiple parameters
template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }
    void show() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, float> p1(10, 20.5);
    Pair<string, int> p2("Age", 21);

    cout << "--- Pair 1 ---" << endl;
    p1.show();

    cout << "--- Pair 2 ---" << endl;
    p2.show();

    return 0;
}

