#include<iostream>

/* Types of header files
1. System header files : It comes with the compiler : #include<iostream>
2. User-defined header files : It is written by the programmer : #include"this.h" */
using namespace std;

int main(){
    cout << "Hello World";
    return 0;
}


/*//Outputs in c++

1. String Output
int main(){
    cout<<"Hello World";
    return 0;
}
*/


/*
// 2. Numbers and characters output
int main(){
    int n1 = 23;
    double n2 = 256.342;
    char ch = 'A';
    cout << n1 << endl;   //endl is used to insert a new line
    cout << n2 << endl;
    cout << "Character: " << ch << endl;
    return 0;
}
*/


/*
// 3. Integer input/output
int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num ;  //taking input
    cout << "The number is: " << num;
    return 0;
}
*/

/*
T//aking multiple inputs
int main(){
    char a;
    int num;
    cout << "Enter a character and a number: ";
    cin >> a >> num;
    cout << "Number: " << num << endl;
    cout << "Character: " << a;
    return 0;
}
*/
