
// Sort student records using a class

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    Student() {
        roll = 0;
        marks = 0;
    }

    void input() {
        cout << "Enter roll and marks: ";
        cin >> roll >> marks;
    }

    float getMarks() {
        return marks;
    }

    void display() {
        cout << roll << " " << marks << endl;
    }

    void swap(Student &s) {
        Student t = *this;
        *this = s;
        s = t;
    }
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++)
        s[i].input();

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (s[j].getMarks() < s[j + 1].getMarks())
                s[j].swap(s[j + 1]);
        }
    }

    cout << "Sorted students:\n";
    for (int i = 0; i < 3; i++)
        s[i].display();

    return 0;
}
