//-------------------------------FUNCTIONS-----------------------------------
//A function is a block of code that performs a specific task

#include<iostream>
using namespace std;

//Function prototype
void greet();
void sum(int , int);

int main(){
    greet(); // calling the function before declaration
    cout << '\n';
    sum(3,4);  //3 and 4 are actual parameters
    return 0;
}

//Function declaration
void greet(){    //function without parameters
    cout<<"Hello World";
}

// Function with Parameters
void sum(int a , int b){  //a and b are formal parameters
    cout << a+b;
}

//--------------------------FUNCTION TYPES------------------------------

//1. NO argument and NO return value

void prime();
int main(){
    prime();
    return 0;
}

void prime(){
    int n , i , flag = 0;
    cout << "Enter a positive number to check: ";
    cin >> n;
    for(i=2 ; i<n/2 ; i++){    // iterate till n/2 because factors of a number are never greater than half of the number
        if(n % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << n << " is not a prime number.";
    }
    else{
        cout << n << " is a prime number.";
    }
}


//2. NO argument but a return value
int prime();
int main(){
    int num , flag = 0;
    num = prime();
    for(int i=2 ; i<num/2 ; i++){
        if (num % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << num << " is not a prime number.";
    }
    else{
        cout << num << " is a prime number.";
    }
    return 0;
}

int prime(){
    int n;
    printf("Enter a positive value: ");
    cin >> n;
    return n;
}



//3. Arguments passed but NO return value
void prime(int n);

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    prime(num);
    return 0;
}

void prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << n << " is not a prime number.";
    }
    else {
        cout << n << " is a prime number.";
    }
}



//4. Arguments passed and a return value
int prime(int n);

int main()
{
    int num, flag = 0;
    cout << "Enter positive integer to check: ";
    cin >> num;

    // Argument num is passed to check() function
    flag = prime(num);

    if(flag == 1)
        cout << num << " is not a prime number.";
    else
        cout<< num << " is a prime number.";
    return 0;
}

int prime(int n)
{
    int i;
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
            return 1;
    }

    return 0;
}
