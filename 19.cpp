// Calculate area of different shapes

#include <iostream>
using namespace std;

enum Shape {
    Circle = 1,
    Rectangle,
    Square
};

class Area {
public:
    float calculate(Shape s, float a, float b = 0) {
        if (s == Circle)
            return 3.14 * a * a;
        else if (s == Rectangle)
            return a * b;
        else
            return a * a;
    }
};

int main() {
    Area obj;
    int ch;
    float a, b = 0;

    cout << "1. Circle\n2. Rectangle\n3. Square\n";
    cout << "Enter choice: ";
    cin >> ch;

    if (ch < 1 || ch > 3) {
        cout << "Invalid choice";
        return 0;
    }

    cout << "Enter size: ";
    cin >> a;

    if (ch == 2) {
        cout << "Enter breadth: ";
        cin >> b;
    }

    cout << "Area: " << obj.calculate((Shape)ch, a, b);

    return 0;
}