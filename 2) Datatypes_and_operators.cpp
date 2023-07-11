//Datatypes and operators

//C++ type modifiers : signed , unsigned(only +ve int) , short , long(large int)
/*TYPES OF DATATYPES IN C++
1. Built-in : int , float , char , double , boolean
2. User-defined : struct , union , enum , class , typedef
3. Derived : array , function , pointer , reference
*/

#include<iostream>  //header file
using namespace std;  //cout is defined inside the std namespace



//************************OPERATORS*********************

// 1. Arithmetic operator
// int main(){
//     // double a , b;
//     // cin >> a >> b;
//     // cout << (a/b);
//     int num = 4;
//     cout << ++num << endl;  //pre-increment operator
//     cout << num++; //post-increment operator
//     return 0;
// }

//2. Assignment operator : = , += , -= , *= , /= , %=

//3. Relational operator : == , != , > , < , >= , <= 
// int main(){
//     int a = 3 , b = 5;
//     bool result;
//     result = a>b ;
//     cout << result << endl;
//     return 0;
// }

// 4. Logical Operators : && , || , !

//5. Bitwise operators : & , | , ^ , ~ , << , >>

//6. Other operators : sizeof , ?: , & , . , -> 

/*
<< is called insertion operator
>> is called extraction operator
*/

//**********Operator Precedance*****************

int main(){
    int a = 3, b=4;
    int c = a*5 + b;
    cout<< c;
    return 0;
}
