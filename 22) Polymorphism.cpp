//Polymorphism: Ability of a message to displayed in more than one forms

#include<iostream>
using namespace std;

//1.Compile-Time Polymorphism
// A. Function overloading : When there are multiple functions with the same name but different parameters

/*class Example{
    public:
    //function with int parameter
    void func(int x){
        cout<<"Value of x is "<<x<<endl;
    }
    //function with double parameter
    void func(double x){
        cout<<"Value of x is "<<x<<endl;
    }
    //function with same name and 2 parameters
    void func(int x, int y){
        cout<<"Value of x and y is "<<x<<" , "<<y<<endl;
    }
};


int main(){
    Example o1;
    o1.func(5);
    o1.func(15,61);
    o1.func(2.5);
    return 0;
}*/

//B. Operator Overloading
//example: '+' operator when placed between integer operands , adds them and when placed between strings , concatenates them
/*
class Complex{
    private:
    int real, imag;
    public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    //This is automatically called when '+' is used between two complex objects
    Complex operator+(Complex const& obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print(){cout<<real<<" + "<<imag<<"i"<<endl;}
};

int main(){
    Complex c1(10,5), c2(2,4);
    //an example call to operators
    Complex c3 = c1 + c2;
    c3.print();
}*/



//Run time polymorphism
class Animal{
    public:
    string color = "Black";
};
class Dog : public Animal{
    public:
    string color = "Grey";
};
int main(){
    Animal d = Dog();
    cout<<d.color;
    return 0;
}
