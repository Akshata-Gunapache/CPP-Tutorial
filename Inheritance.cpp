//Inheritance in C++
/*
What is inheritance?
-> The capability of a class to derive properties and characteristics from another class is called inheritance.
-> New classes are created from existing ones.
-> New class created is called 'derived' or 'child' class and the existing class is called 'base' or 'parent' class
*/
#include<iostream>
using namespace std;

/*//base class
class Animal{
    public:
    void eat(){
        cout<<"I can eat!"<<endl;
    }
    void sleep(){
        cout<<"I can sleep!"<<endl;
    }
};
//derived class
class Dog : public Animal{
    public:
    void bark(){
        cout<<"I can bark!"<<endl;
    }
};

int main(){
    //create object of the dog class
    Dog d1;
    //calling members of the base class
    d1.eat();
    d1.sleep();
    //calling member of the derived class
    d1.bark();
    return 0;
}*/


//Example : Define member function without argument within the class

class Person{
    int id;
    char name[100];
    public:
    void set_p(){
        cout<<"Enter the id:";
        cin>>id;
        fflush(stdin);
        cout<<"Enter the name:";
        cin.get(name,100);
    }
    void display_p(){
        cout<<endl<<id<<"\t"<<name<<"\t";
    }
};

class Student : private Person{
    char course[50];
    int fee;
    public:
    void set_s(){
        set_p();
        cout<<"Enter the course name:";
        fflush(stdin);
        cin.getline(course,50);
        cout<<"Enter the course fee:";
        cin>>fee;
    }
    void display_s(){
            display_p();
            cout<<course<<"\t"<<fee<<endl;
    }
};

int main(){
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}
