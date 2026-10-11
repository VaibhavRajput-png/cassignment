
// Employee salary using inheritance

#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    float salary;

public:
    Employee(int i, float s) {
        id = i;
        salary = s;
    }
};

class Manager : public Employee {
private:
    float bonus;

public:
    Manager(int i, float s, float b) : Employee(i, s) {
        bonus = b;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total: " << salary + bonus;
    }
};

int main() {
    int id;
    float s, b;

    cout << "Enter id, salary and bonus: ";
    cin >> id >> s >> b;

    Manager m(id, s, b);
    m.display();

    return 0;
}
