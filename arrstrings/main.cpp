#include <iostream>

using namespace std;


void sample(int n[]) {
    for (int i=0; i <= 4; i++) {
        cout << n[i] + 1 << endl;
    }
}

int main() {
//    int nums[5] = {10,20,30,40,50};
//    int sum;
//    int test1[2][4] = {{1,3,5,7}, {2,4,6,8}};
//    int test2[2][3][4] = {{{1,2,3,4}, {5,6,7,8}, {9,0,1,2}}, {{3,4,5,6}, {7,8,9,0}, {1,2,3,4}}};

//    for (const int &n: nums){
//        cout << n << endl;
//    }
//
//
//    for (const int &n: nums) {
//        sum += n;
//    }
//
//    cout << "The SUM is " << sum << endl;

//    sample(nums);
//
//    cout << nums << endl;

    char str[] = "hello world";
    char sv[100];

    cout << str << endl;

    cout << "Enter a string: ";
    cin.get(sv, 100);

    cout << sv << endl;

    return 0;
}
