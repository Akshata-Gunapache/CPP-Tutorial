//Recursion and recursive functions
//A function that calls itself is known as recursive function

#include<iostream>
using namespace std;

//Factorial of a number using recursion
int fact(int);
//Fibonnaci series
int fib(int);

int main(){
    // int n;
    // cout << "Enter a non-negative nmber : ";
    // cin >> n;

    // cout << "Factorial of " << n << " = " << fact(n) << endl;



    int n = 5;
    cout<<"Fibonacci series of 5 numbers is: ";
 
    // for loop to print the fibonacci series.
    for (int i = 0; i < n; i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}

int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else  
        return n*fact(n-1);
}

int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1 || n == 2){
        return 1;
    }
    else
        return (fib(n-1) + fib (n-2));
}
