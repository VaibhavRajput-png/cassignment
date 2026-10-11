// Find sum using pointer

#include <iostream>
using namespace std;

int main() {
    int a[5], sum = 0;
    int *p = a;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> *(p + i);

    for (int i = 0; i < 5; i++)
        sum += *(p + i);

    cout << "Sum: " << sum;

    return 0;
}