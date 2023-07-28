// C++ "this" Pointer : In c++, this is a keyword that refers to the current instance of the class
/*
It can be used to :
1) Pass current object as parameter to another method
2) Refer current class instance variable
3) Declare indexers
*/

#include <iostream>
using namespace std;

/*class Employee
{
public:
    int id;
    string name;
    float salary;
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main(void)
{
    Employee e1 = Employee(101, "Akshata", 25891898);
    Employee e2 = Employee(101, "Ashish", 34514789);
    e1.display();
    e2.display();
    return 0;
}*/



// Example: When local variable is same as member's name
/*class Test
{
private:
    int x;

public:
    void setX(int x)
    {
        this->x = x;
    }
    void print() { cout << "x = " << x << endl; }
};

int main()
{
    Test t1;
    t1.setX(20);
    t1.print();
    return 0;
}*/



//Example: to return reference to the calling object
class Test{
    private:
    int x;
    int y;
    public:
    Test(int x=0 , int y=0){
        this->x=x;
        this->y=y;
    }
    Test &setX(int a){
        x=a;
        return *this;
    }
    Test &setY(int b){
        y=b;
        return *this;
    }
    void print(){
        cout<<"x = " << x << " y = " << y << endl;
    }
};

int main(){
    Test t1(5,5);
    //chain function calls . all calls modify the same object as the object is returned by reference
    t1.setX(10).setY(20);
    t1.print();
    return 0;
}


//Difference between scope resolution operator and this pointer
// Scope resolution operator(::) is for accessing static or class members and this pointer is for accessing object members when there is a local variale with the same name
