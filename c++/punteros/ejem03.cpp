#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int* p = &x;

    cout << "x = " << x << "\n";
    cout << "&x = " << &x << "\n";
    cout << "p = " << p << "\n";
    cout << "*p = " << *p << "\n";

    return 0;
}
