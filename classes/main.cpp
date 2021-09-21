#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

//    Person(Person &obj){
//        name = obj.name;
//        age = obj.age;
//    }


    void intro() {
        cout << "Hello, my name is " << name << " and I am currently " << age << " years old." << endl;
    }
};


class Area {
private:
    float length;
    float width;
public:
    Area(float len, float wid) {
        length = len;
        width = wid;
    }

    Area operator + (const Area& obj) {
       return Area(length + obj.length, width + obj.width);
    }

    float operator * (const Area& obj) {
        return (length * width) + (obj.length * obj.width);
    }
};

int main() {


    return 0;
}
