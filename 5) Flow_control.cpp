#include<iostream>
using namespace std;
//If statement
int main(){
  int n;
  cout << "Enter an integer : "<<endl;
  cin >> n;
  if(n > 0){
    cout << "The number is a positive integer" << endl;
  }
  cout << "this statement is always executed";
  return 0;
}

//If-else statement
int main() {
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  if (n >= 0) {
    cout << "You entered a positive integer: " << n << endl;
  }
  else {
    cout << "You entered a negative integer: " << n << endl;
  }
  cout << "This line is always printed.";
  return 0;
}

//If...else...else if statement
int main() {
  int n;re
  cout << "Enter an integer: ";
  cin >> n;
  if (n > 0) {
    cout << "You entered a positive integer: " << n << endl;
  } 
  else if (n < 0) {
    cout << "You entered a negative integer: " << n << endl;
  } 
  else {
    cout << "You entered 0." << endl;
  }
  cout << "This line is always printed.";
  return 0;
}

//*************************************** FOR LOOP ********************************************
int main(){
  for(int i=1 ; i<=5 ; i++){
    cout << i <<" ";
  }
  return 0;
}

// Range Based for Loop
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int n : arr) {
        cout << n << " ";
    }
    return 0;
}

//*************************************** WHILE LOOP ********************************************
int main() {
    int i = 1; 
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }    
    return 0;
}

//*************************************** DO-WHILE LOOP ********************************************
//body of the loop is executed first then the condition is evaluated.
int main(){
  int i = 1;
  do{
    cout << i << " ";
    ++i;
  }while(i<=5);
  return 0;
}


// program to find the sum of positive numbers only
int main() {
    int n = 0;
    int sum = 0;

    do {
        sum += n;
        cout << "Enter a number: ";
        cin >> n;
    }
    while (n >= 0);
    cout << "\nThe sum is " << sum << endl;    
    return 0;
}



//for vs while loops
//A for loop is usually used when the number of iterations is known.
//However, while and do...while loops are usually used when the number of iterations is unknown
