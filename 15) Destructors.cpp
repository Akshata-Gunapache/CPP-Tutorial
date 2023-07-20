// Destructors in c++
// It is the last function that is going to be called before an object is destroyed
// It is not possible to define more than one destructor.
// Cannot be overloaded
// No arguments, no return type

#include <iostream>
using namespace std;

/*class Test
{
public:
    Test() { cout << "\nConstructor executed"; }
    ~Test() { cout << "\nDestructor executed"; }
};

int main()
{
    // Test t;
    // When multiple objects are created
    Test t1,t2,t3;
    return 0;
}*/

// Calling a destructor explicitly
#include <bits/stdc++.h>
class String
{
private:
    char *s;
    int size;

public:
    String(char*); // Constructor
    ~String();      // Destructor
};

String::String(char *c)
{
    size = strlen(c);
    s = new char[size + 1];
    strcpy(s, c);
}

String::~String() { delete[] s; }

int main()
{
    String str = "Hello, World!";
    String myString(str);
    cout << "String: " << myString.s << endl;
    return 0;
}
