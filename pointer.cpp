#include <iostream>
using namespace std;

int main() {
    int a = 10;         // a is an integer
    int* p = &a;        // p is a pointer to an integer

    cout << "Value of a: " << a << endl;           // 10
    cout << "Address of a: " << &a << endl;        // e.g., 0x61ff08
    cout << "Value of p (address): " << p << endl; // same as &a
    cout << "Value at p (dereference): " << *p << endl; // 10

    return 0;
}
