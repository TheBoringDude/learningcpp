#include <iostream>

using namespace std;

enum Seasons {
    spring, summer, winter, autumn
};

struct Distance {
    int i;
    float f;
};

struct Person {
    string name;
    int age;
    float salary;
};

void displayPerson(Person p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}

Person getPerson() {
    Person p1{
            age: 10
    };

    p1.name = "John Doe";
    // p1.age = 20;
    p1.salary = 1000.00;

    return p1;
}

int main() {
    Person p = getPerson();
    displayPerson(p);

    Seasons now = winter;

    Distance *ptr;
    cout << "Enter inch: ";
    cin >> ptr->i;

    cout << "Distance is " << ptr->i << " inches." << endl;

    cout << now << endl;

    return 0;
}
