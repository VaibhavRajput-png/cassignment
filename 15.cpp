// Sort an array using pointers

#include <iostream>
using namespace std;

int main() {
    int a[5], *p, t;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    p = a;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++)
        cout << *(p + i) << " ";

    return 0;
}