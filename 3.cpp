
// Sort numbers using bubble sort

#include <iostream>
using namespace std;

int main() {
    int a[5], t;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
