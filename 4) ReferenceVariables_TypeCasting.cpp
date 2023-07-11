//************Reference variables****************
#include<iostream>
using namespace std;

int main(){
    float a = 435;
    float &b = a;
    b = 56;
    cout << a << endl;
    cout << b << endl;
    return 0;
}

// **************TYPE CONVERSIONS***************
// 1. Implicit

// int main(){
//     int num_int = 6;
//     double num_double;
//     num_double = num_int;
//     cout << num_int << endl;
//     cout << num_double << endl;
//     return 0;
// }

//2 . Explicit

// int main(){
//     int num_int = 6.324;
//     double num_double;
//     num_double = (double)num_int;
//     cout << num_double << endl;
//     return 0;
// }

// 3. Type casting
// int main() {
//     double num_double = 3.56;
//     cout << "num_double = " << num_double << endl;

//     // C-style conversion from double to int
//     int num_int1 = (int)num_double;
//     cout << "num_int1   = " << num_int1 << endl;

//     // function-style conversion from double to int
//     int num_int2 = int(num_double);
//     cout << "num_int2   = " << num_int2 << endl;

//     return 0;
// }
