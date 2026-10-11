
// Store and display values using union and enum

#include <iostream>
using namespace std;

enum Type { INT_VAL = 1, FLOAT_VAL, CHAR_VAL };

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;
    Type t;
    int ch;

    cout << "1. Integer\n2. Float\n3. Character\n";
    cout << "Enter choice: ";
    cin >> ch;

    if (ch == 1) {
        cout << "Enter number: ";
        cin >> d.i;
        t = INT_VAL;
    }
    else if (ch == 2) {
        cout << "Enter number: ";
        cin >> d.f;
        t = FLOAT_VAL;
    }
    else if (ch == 3) {
        cout << "Enter character: ";
        cin >> d.c;
        t = CHAR_VAL;
    }
    else {
        cout << "Wrong choice";
        return 0;
    }

    if (t == INT_VAL)
        cout << "Value: " << d.i;
    else if (t == FLOAT_VAL)
        cout << "Value: " << d.f;
    else
        cout << "Value: " << d.c;

    return 0;
}
