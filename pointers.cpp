//***********POINTERS*************
// Pointers are variables that store the memory address of other variables.Ex : int* ptr = &a; Where &->address of operator , * -> dereference operator

#include<iostream>
using namespace std;

// int main(){
//     // int a = 3;
//     int *b = &a;
//     cout << *b << endl; //value stored at
//     cout << b << endl;
//     cout << &a << endl;  //address of

//     int **c = &b; //Pointer to pointer : stores address of pointer
//     cout << &b << endl;
//     cout << c << endl;
//     cout << *c << endl;  
//     cout << **c << endl; //return the value at the address b

//     int var = 5;
//     int *ptr;  // declare pointer variable
//     ptr = &var; //store address of var
//     cout << var << endl;    //print the value of var
//     cout << &var << endl;   //print the address of var
//     cout << ptr << endl;    //print the pointer ptr
//     cout << *ptr << endl;   //print the content of the address ptr points to

//     return 0;
// }




//************************ POINTERS AND ARRAYS **************************
// nums[i][j] = *(*(nums+i)+j) -> general notation
/*Eg: *(*nums) = nums[0][0]
    *(*nums + 1) = nums[0][1]
    *(*(nums+1)+1) = nums[1][1]
*/
/*
int main(){
    int *ptr ;
    int arr[5] = {1,2,3,4,5};
    // ptr = &arr[0];  //store the address of first element in ptr
    ptr = arr; //this also means the same as above
    //if ptr points to the first element of the array , ptr + 3 points to the fourth element of the array


    //Displaying addresses of each array element using pointers
    ptr = arr;
    for(int i=0 ; i<5 ; i++){
        cout << i << "-" << ptr + i << endl;
    }
    return 0;
}

*/

//cout << *(arr + i) << endl; used to display array elements using pointers is wquivalent to cout << arr[i] << endl;
