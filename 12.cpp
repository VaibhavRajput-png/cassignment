
// Count the frequency of elements using pointers

#include <iostream>
using namespace std;

int main() {
    int a[5], *p, count;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    p = a;

    for (int i = 0; i < 5; i++) {
        count = 0;

        for (int j = 0; j < 5; j++) {
            if (*(p + i) == *(p + j))
                count++;
        }

        int found = 0;
        for (int j = 0; j < i; j++) {
            if (*(p + i) == *(p + j))
                found = 1;
        }

        if (found == 0)
            cout << *(p + i) << " occurs "
                 << count << " times\n";
    }

    return 0;
}
