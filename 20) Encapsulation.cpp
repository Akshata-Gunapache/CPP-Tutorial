//ENCAPSULATION : In c++, encapsulation means wrapping up of data and information in a single unit
// In oops, encaosulation means binding together the data and the functions that manipulate them 


//Properties of encapsulation: Data Protection, Information hiding

//Features of encapsulation:
// -> We cannot access any function from the class directly 
// -> The function that we are making inside the class must use only member variables, only then its called encapsulation
// -> Increases the security of the data
// -> It helps to control the modification of data members

#include<iostream>
using namespace std;

/*class Rectangle{
    public:
    int length;
    int breadth;
    //constructor to initialize variables
    Rectangle(int len, int brth){
        length = len;
        breadth = brth;
    } 
    //function to calculate area
    int getArea(){
        return length*breadth;
    }
};

int main(){
    //create object of rectangle class
    Rectangle rect(8,6);
    //call getarea function
    cout<<"Area = "<<rect.getArea();
    return 0;
}*/



/*
Example 2:
class Encapsulation{
    private:
    int x;
    public:
    void setX(int a){
        x=a;
    }
    int getX(){
        return x;
    }
};

int main(){
    Encapsulation obj;
    obj.setX(5);
    cout<<"X = "<<obj.getX()<<endl;
}*/



//Example 3:
class Circle{
    private:
    float area;
    float radius;

    public:
    void getRadius(){
        cout<<"Enter radius\n";
        cin>>radius;
    }
    void findArea(){
        area = 3.14 * radius * radius;
        cout << "Area of circle = " << area;
    }
};

int main(){
    Circle cir;
    cir.getRadius();
    cir.findArea();
}

//Role of access specifiers in encapsulation
// Access specifiers facilitate Data Hiding in C++ programs by restricting access to the class member functions and data members
//There are 3 types of access specifiers in C++: public, private, protected
//By default, all data members and member functions of a class are made private by the compiler

