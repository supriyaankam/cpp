//Illustrate the use of multiple catch statements.
#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter a number (1: Zero Error, 2: Negative Error, 3: Character Error): ";
        cin >> choice;

        if (choice == 1)
            throw 0;  // integer exception
        else if (choice == 2)
            throw string("Negative number not allowed!");  // string exception
        else if (choice == 3)
            throw 'X';  // character exception
        else
            cout << "No exception thrown. Input is valid!" << endl;
    }

    catch (int x) {
        cout << "Caught an Integer Exception: Division by zero or invalid number!" << endl;
    }
    catch (string msg) {
        cout << "Caught a String Exception: " << msg << endl;
    }
    catch (char ch) {
        cout << "Caught a Character Exception: " << ch << endl;
    }
    catch (...) {
        cout << "Caught an Unknown Exception!" << endl;
    }

    cout << "Program continues after handling exception..." << endl;
    return 0;
}

