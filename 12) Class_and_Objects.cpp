//OBJECT ORIENTED PROGRAMMING in C++

//Class : Class is a blueprint representing a group of objects which shares some common properties and behaviours
//Object : An object is an instance of a Class . It is an identifiable entity that has some characteristics and behaviours 
//When a class is defined , no memory is allocated but when object is created , memory is allocated

#include<iostream>
using namespace std;


/*Example1:

//create a class
class Room{
    public:  //this means that the members are public and can be accessed anywhere from the program
    double l;
    double b;
    double h;

    double calcArea(){
        return l*b;
    }
    double calcVol(){
        return l*b*h;
    }
};

int main(){
    //create object(room1) of Room class
    Room room1;
    //assign values to data members
    room1.l = 42.5;
    room1.b = 30.8;
    room1.h = 19.2;
    //calculate and display area and volume of the room
    cout << room1.calcArea() << endl;  //access the data members and member functions using a dot operator
    cout << room1.calcVol() << endl;
    return 0;
}
*/



//Example 2:
/*class Person{
    public:  //Access specifier
    string username;  //Data members
    void printname(){cout << "Username is : " << username;}  //Member function
};

int main(){
    Person g1;  //declaring an object of class Person
    g1.username = "Akshata";  //accessing data member
    g1.printname();   //accessing member function
    return 0;
}*/


/*//Using public and private in Class
class Room{
    private:
    double l;
    double b;
    double h;

    public:
    void initData(double len , double bre , double hei){
        l = len;
        b = bre;
        h = hei;
    }
    double calculateArea() {
        return l * b;
    }

    double calculateVolume() {
        return l * b * h;
    }
};


int main() {

    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
// The above example uses a public function to initialize the private variables 
*/


//Example 3
// class Employee{
//     private:
//     int a , b ,c;
//     public:
//     int d,e;
//     void setData(int a, int b, int c);  //Declaration
//     void getData(){
//         cout << "the value of a is "<<a<<endl;
//         cout << "the value of b is "<<b<<endl;
//         cout << "the value of c is "<<c<<endl;
//         cout << "the value of d is "<<d<<endl;
//         cout << "the value of e is "<<e<<endl;
//     }
// };

// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee Akshata;
//     Akshata.d = 34;
//     Akshata.e = 22;
//     Akshata.setData(1,4,2);
//     Akshata.getData();
//     return 0;
// }



//--------------------CONSTRUCTOR---------------------------
// A special type of member function that is called automatically when the object is created.
//It has the same name as the class and it doesnt have a return type and is public


//Constructor with no parameters:Default constructor
/*class Wall{
    private:
    double length;
    public:
    Wall(){
        length = 5.5;
        cout << "Creating a wall" <<endl;
        cout<<"Length = "<<length<<endl;
    }
};
int main(){
    Wall wall1;  //Wall() constructor is called when wall1 object is created
    return 0;
}*/

//Parameterized Constructor 
/*class Wall{
    private:
    double length;
    double height;
    public:
    Wall(double len , double hgt){
        length = len;
        height = hgt;
    }
    double calculateArea(){
        return length * height;
    }
};

int main(){
    Wall wall1(10.4,8.5);
    Wall wall2(9.4,9.5);
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea();
    return 0;
}*/


//defining constructor within the class
/*class student{
    int rno;
    char name[50];
    double fee;
    public:
    student(){
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }
    void display(){
        cout << endl << rno << '\t' << name << "\t" << fee;
    }
};

int main(){
    student s; // constructor gets called automatically when we create the object of the class
    s.display();
    return 0;
}*/



//defining comstructor outside the class
/*class student {
    int rno;
    char name[50];
    double fee;
    public:
    student();
    void display();
};

student::student(){
    cout << "Enter the RollNo:";
    cin >> rno;
    cout << "Enter the Name:";
    cin >> name;
    cout << "Enter the Fee:";
    cin >> fee;
}

void student::display(){
    cout << endl << rno << '\t' << name << "\t" << fee;
}

int main()
{
    student s;
    s.display();
    return 0;
}*/


//Parameterized constructor
/*class Point{
    private:
    int x, y;
    public:
    Point(int x1, int y1){
        x = x1;
        y = y1;
    }
    int getX(){return x;}
    int getY(){return y;}
};
int main(){
    Point p1(10,15);
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    return 0;
}*/


//copy constructor: it takes a reference to an object of the same class as an argument
/*class Sample
{
    int id;
    public:
    void init(int x)
    {
        id=x;   
    }   
    Sample(){}  //default constructor with empty body
     
    Sample(Sample &t)   //copy constructor
    {
        id=t.id;
    }
    void display()
    {
        cout<<endl<<"ID="<<id;
    }
};
int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();
     
    Sample obj2(obj1); //or obj2=obj1;    copy constructor called
    obj2.display();
    return 0;
}*/
