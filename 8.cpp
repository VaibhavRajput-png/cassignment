
// Swap two numbers using pointers

#include <iostream>
using namespace std;

void swap(int *p, int *q) {
    int t = *p;
    *p = *q;
    *q = t;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swap(&a, &b);

    cout << "After swap: " << a << " " << b;

    return 0;
}
