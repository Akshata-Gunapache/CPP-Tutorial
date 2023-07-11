//Structures, Union , Enum

#include<iostream>
using namespace std;
//----------------------------------------STRUCTURES---------------------------------------
//Structures(User-defined datatype) : Collection of different data types under a single name
/*
struct employee{
    int empid;
    char favChar;
    float salary;
};

int main(){
    struct employee Akshata;  //Here struct employee is a datatype similar to int and Akshata is a variable
    Akshata.empid = 1;
    Akshata.favChar = 'a';
    Akshata.salary = 1240301248;
    cout << Akshata.salary << endl;
    cout << Akshata.favChar << endl;
    cout << Akshata.empid << endl;
    return 0;
}*/

/*
typedef struct Student{ //typedef keyword is used to give a new name to an existing structure
    char name[50];
    int age;
    float cgpa;
}stud;

int main(){
    stud s1;
    cout << "Enter your full name : " << endl;
    cin.get(s1.name,50);
    cout << "Enter your age : " << endl;
    cin >> s1.age;
    cout << "Enter your cgpa : " << endl;
    cin >> s1.cgpa;

    cout << "\n\t-----Displaying Student Details-----\n" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    return 0;
}
*/


//-----------------------------------UNIONS-----------------------------------
//Unions are similar to structures but in the case of structures there is a specific location for every member, thus it can store multiple values of the various members.
//Unions : there is an allocation of only one shared memory for all input data members
//You can set value of only one member by sharing memory to all
/*union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 34;
    cout << m1.rice << endl; //the value 34 is printed
    m1.car = 'a';
    cout << m1.rice << endl;  //value 34 is overwritten by 97

    return 0;
}*/


//------------------------------------ENUMS------------------------------
//Enums are user-defined data types that consist of named integral constants.
//It helps to assign constants to set of names to make the program easier to read, maintain and understand

/*enum year {mon,tue,wed,thu,fri,sat,sun};
int main()
{
    int i;
    for (i = mon; i <= sun; i++)
        cout << i << " ";
    return 0;
}*/


/*
int main(){
    enum Gender {Male , Female};
    Gender gen = Female;
    switch (gen)
    {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }
    return 0;
}*/
