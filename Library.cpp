#include<iostream>
using namespace std;

class Library {
private:
    string isbn;
    int copies;
public:
    string author;
    string title;

    // Constructor to set initial values
    Library(string i, int c, string a, string t) {
        isbn = i;
        copies = c;  // Fixed the incorrect variable 's'
        author = a;
        title = t;
    }

    // Method to issue a book
    void issuebook() {
        if (copies > 0) {
            copies--;
            cout << "Book issued successfully. Remaining copies: " << copies << endl;
        } else {
            cout << "No copies available" << endl;
        }
    }

    // Method to add copies
    void addcopies(int n) {
        if (n > 0) {
            copies += n;
            cout << "Copies added. Total available: " << copies << endl;
        } else {
            cout << "No copies will be added" << endl;
        }
    }
};

int main() {
    Library l("154554-475", 10, "Bjarne", "Python");
    l.issuebook();
    l.addcopies(3);
    l.issuebook();

    return 0;
}

