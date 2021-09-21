#include <iostream>

using namespace std;

//int add(int, int);
//
//void greet() {
//    cout << "Hello World!" << endl;
//}
//
//int main() {
//    int num1 = 3;
//    int num2 = 10;
//
//    int sum = add(num1, num2);
//    cout << sum << endl;
//
//    greet();
//
//
//    float sqr = sqrt(10);
//    cout << "Sqrt of 10 is " << sqr << endl;
//
//    return 0;
//}
//
//
//int add(int num1, int num2) {
//    return num1 + num2;
//}

void greet(string message = "Hello World") {
    cout << message << endl;
}

void adder() {
    int nums[5];
    int sum;

    greet();
    greet("What a wonderful day!");

    for (int i = 0; i < 5; i++) {
        cout << "Enter Num#" << i + 1 << ": ";
        cin >> nums[i];
    }

    for (int x: nums) {
        sum += x;
    }



    cout << "SUM: " << sum << endl;
}

void test() {
    static int num = 0;
    ++num;

    cout << num << endl;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    };
}

int x;

int& ref(){
    return x;
}


int main() {
    ref() = 5;

    cout << x << endl;

    return 0;
}
