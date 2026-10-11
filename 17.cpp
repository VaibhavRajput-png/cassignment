// Find second largest element

#include <iostream>
using namespace std;

int main() {
    int a[10], n, largest, second;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    largest = second = -2147483647 - 1;

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }

    if (second == -2147483647 - 1)
        cout << "Second largest not found";
    else
        cout << "Second largest: " << second;

    return 0;
}