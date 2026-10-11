// Separate even and odd numbers

#include <iostream>
using namespace std;

int main() {
    int a[10], even[10], odd[10];
    int n, x = 0, y = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] % 2 == 0)
            even[x++] = a[i];
        else
            odd[y++] = a[i];
    }

    cout << "Even numbers: ";
    for (int i = 0; i < x; i++)
        cout << even[i] << " ";

    cout << "\nOdd numbers: ";
    for (int i = 0; i < y; i++)
        cout << odd[i] << " ";

    return 0;
}