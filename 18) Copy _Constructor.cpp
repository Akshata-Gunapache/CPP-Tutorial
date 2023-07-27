//Copy constructor
//A copy constructor is a member function that initializes an object using another object of the same class.
//a copy constructor is called mainly when a new object is created from an existing object, as a copy of existing object

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

/*class storeVal{
    public:
    // Constructor
    storeVal(){}
    //copy constructor
    storeVal(const storeVal& s){
        cout << "copy constructor has been called "<<endl;
    }
};

int main(){
    storeVal obj1;
    storeVal obj2 = obj1;
    return 0;
}*/

class student{
    int rno;
    char name[50];
    double fee;
    public:
    student(int , char[], double);
    student(student &s){     //copy constructor
        rno = s.rno;
        strcpy(name,s.name);
        fee=s.fee;
    }
    void display();
};

student :: student(int no, char n[], double f){
    rno = no;
    strcpy(name,n);
    fee=f;
}

void student::display(){
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}

int main(){
    student s(1001, "Akshata", 10000);
    s.display();
    student Akshata(s);   //copy constructor called
    Akshata.display();
    return 0;
}


/*

Characteristics of A Copy Constructor:
-> Used to initialize the members of a newly created object by copying the members of an already existing object
-> It takes a reference to an object of the same class as an argument
*/
