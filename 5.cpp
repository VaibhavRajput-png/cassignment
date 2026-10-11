
// Student result using class and constructor

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float a, b, c;

public:
    Student(int r, float x, float y, float z) {
        roll = r;
        a = x;
        b = y;
        c = z;
    }

    void display() {
        float total = a + b + c;

        cout << "Roll: " << roll << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << total / 3;
    }
};

int main() {
    int r;
    float a, b, c;

    cout << "Enter roll number: ";
    cin >> r;

    cout << "Enter 3 marks: ";
    cin >> a >> b >> c;

    Student s(r, a, b, c);
    s.display();

    return 0;
}
