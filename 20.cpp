// Store book details

#include <iostream>
using namespace std;

struct Book {
    int id;
    char name[50];
    float price;
};

int main() {
    Book b[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter book id, name and price: ";
        cin >> b[i].id >> b[i].name >> b[i].price;
    }

    cout << "\nBook details\n";

    for (int i = 0; i < 3; i++) {
        cout << b[i].id << " "
             << b[i].name << " "
             << b[i].price << endl;
    }

    return 0;
}