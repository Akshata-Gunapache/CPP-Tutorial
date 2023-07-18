//Constructor overloading : They have the same name (name of the class) but different number of arguments.

//Example 1

#include<iostream>
using namespace std;

class Person{
    int age;
    public:
    //1. constructor with no arguments
    Person(){
        age = 20;
    }
    //2. Constructor with an argument
    Person(int a){
        age = a;
    }
    int getAge(){
        return age;
    }
};

int main(){
    Person p1, p2(45);
    cout << p1.getAge() << endl;
    cout << p2.getAge() << endl;
    return 0;
}


//Example 2
#include<iostream>
using namespace std;

class Room{
    double length;
    double breadth;
    public:
    //1. Constructor with no arguments
    Room(){
        length = 3.4;
        breadth = 1.3;
    }
    //2. Constructor with two arguments
    Room(double l , double b){
        length = l;
        breadth = b;
    }
    //3. Constructor with one argument 
    Room(double len){
        length = len;
        breadth = 7.2;
    }
    double calcArea(){
        return length*breadth;
    }
};

int main(){
    Room r1 , r2(8.3,9.5) , r3(8.2);
    cout << "When no argument is passed: " << endl;
    cout << "Area of room = " << r1.calcArea() << endl;

    cout << "\nWhen 2 arguments are passed." << endl;
    cout << "Area of room = " << r2.calcArea() << endl;

    cout << "\nWhen breadth is fixed and length is passed:" << endl;
    cout << "Area of room = " << r3.calcArea() << endl;

    return 0;
}
