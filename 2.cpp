
// Linear search using pointers

#include <iostream>
using namespace std;

int main() {
    int a[5], n, *p, found = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter number to search: ";
    cin >> n;

    p = a;

    for (int i = 0; i < 5; i++) {
        if (*(p + i) == n) {
            cout << "Found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Not found";

    return 0;
}
