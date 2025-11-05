//Implement Exceptions handling.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Division by zero error!"; // throw exception
        double result = (double)a / b;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {  // catch exception
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues after exception handling..." << endl;
    return 0;
}

