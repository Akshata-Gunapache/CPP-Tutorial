//Call by value and call by reference
#include<iostream>
using namespace std;

/*//Call by value : The values of actual parameters are copied to the function's formal parameters
// int sum(int a, int b){
//     return a+b;
// }

//Call by reference using pointers : Address of the actual parameter is passed to the function as formal parameters
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Call by reference using refernce variables 
void swapRefVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4 , y = 5;
    // cout << "The sum is : " << sum(x,y);
    cout << "The value of x is " <<x<< " and the value of y is " <<y<<endl;
    swap(&x,&y);
    cout << "The value of x is " <<x<< " and the value of y is " <<y<<endl;
    swapRefVar(x,y);
    cout << "The value of x is " <<x<< " and the value of y is " <<y<<endl;    
    return 0;
}
*/

//--------------------------FUNCTION OVERLOADING-------------------------
//In C++, two functions can have the same name if the number and/or type of arguments passed is different.
//same name different arguments
//Examples :
// int test(){};
// int test(int a){}
// float test(double a){}
// int test(int a , double b){}

// Overloaded functions may or may not have different return types but they must have different arguments.


/*//Overloading using different types of parameter
float absolute(float var){
    if(var < 0.0){
        var = -var;
    }
    return var;
}
int absolute(int var){
    if(var < 0){
        var = -var;
    }
    return var;
}
int main(){
    //call function with the int type parameter
    cout << "Absolute value of -5 = " << absolute(-5) << endl;
    //call function with the float type parameter
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    return 0;
}
*/



// Overloading Using Different Number of Parameters

// function with 2 parameters
void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// function with double type single parameter
void display(double var) {
    cout << "Double number: " << var << endl;
}

// function with int type single parameter
void display(int var) {
    cout << "Integer number: " << var << endl;
}

int main() {
    int a = 5;
    double b = 5.5;
    // call function with int type parameter
    display(a);
    // call function with double type parameter
    display(b);
    // call function with 2 parameters
    display(a, b);
    return 0;
}
