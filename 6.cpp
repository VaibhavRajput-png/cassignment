
// Binary search

#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n, low = 0, high = 4, mid, found = 0;

    cout << "Enter number to search: ";
    cin >> n;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == n) {
            cout << "Found at position " << mid + 1;
            found = 1;
            break;
        }
        else if (a[mid] < n)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found == 0)
        cout << "Not found";

    return 0;
}
