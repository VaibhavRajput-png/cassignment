
// Employee details using structure

#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    Employee e[3];
    float max;

    for (int i = 0; i < 3; i++) {
        cout << "Enter id, name and salary: ";
        cin >> e[i].id >> e[i].name >> e[i].salary;
    }

    max = e[0].salary;

    for (int i = 1; i < 3; i++) {
        if (e[i].salary > max)
            max = e[i].salary;
    }

    cout << "\nEmployees:\n";
    for (int i = 0; i < 3; i++) {
        cout << e[i].id << " "
             << e[i].name << " "
             << e[i].salary << endl;
    }

    cout << "Highest salary: " << max;

    return 0;
}
