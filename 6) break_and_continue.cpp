//***********************BREAK STATEMENT*******************
//It terminates the loop when it is encountered
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // break condition     
        if (i == 3) {
            break;
        }
        cout << i << endl;
    }
return 0;
}


//break with while loop
int main() {
    int n;
    int sum = 0;
    while (true) {
        cout << "Enter a number: ";
        cin >> n;
        // break condition
        if (n < 0) {
            break;
        }
        sum += n;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}



//***********************CONTINUTE STATEMENT*******************
// skip the current iteration and move with the next iteration to complete the loop
// program to print the value of i

int main() {
    for (int i = 1; i <= 5; i++) {
        // condition to continue
        if (i == 3) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
