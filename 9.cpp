
// Store student details using class and constructor

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    char name[30];
    float marks;

public:
    Student(int r, const char n[], float m) {
        roll = r;
        int i = 0;

        while (n[i] != '\0' && i < 29) {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';

        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int r;
    char n[30];
    float m;

    cout << "Enter name, roll and marks: ";
    cin >> n >> r >> m;

    Student s(r, n, m);
    s.display();

    return 0;
}
