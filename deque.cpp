//Implement Deque and its Operations.
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << "Deque elements: ";
    for (deque<int>::iterator it = dq.begin(); it != dq.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "After deleting front and back: ";
    for (deque<int>::iterator it = dq.begin(); it != dq.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Size of deque: " << dq.size() << endl;

    return 0;
}


