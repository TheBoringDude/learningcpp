#include <iostream>

using namespace std;

int main() {
    int age = 19;
    string name = "Joshue";

    cout << age << endl;
    cout << "Name: " << name << endl;
    cout << "Hello, World!" << endl;

//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << "The number is " << num << endl;
//
//    string message;
//    int integer;
//    cout << "Enter a message a number: ";
//    cin >> message >> integer;
//    cout << message << integer << endl;

    int number = 100;
    if (number == 100) {
        cout << "Number is perfect!" << endl;
    }


//    int inputNum;
//    cout << "Enter a number: ";
//    cin >> inputNum;
//    if (inputNum == 10) {
//        cout << "Double or more digits!";
//    }else {
//        cout << "Less than 10!";
//    }

    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    int xArr[] = {1,2,3,4,56,7,8,9};
    for (int n: xArr) {
        cout << n << " ";
    }






    return 0;
}
