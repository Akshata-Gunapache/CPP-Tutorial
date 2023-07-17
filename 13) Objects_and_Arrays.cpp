// Objects Memory Allocation & using Arrays in Classes
#include <iostream>
using namespace std;
/*
class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void displayPrice(void);
    void setPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter id of your item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}*/

//----------------Static members and methods in C++ OOPS------------------
/*class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

// count is a static data member of class Employee
int Employee::count; // default value is 0

int main()
{
    Employee Akshata, Saisha, Ashish;
    Akshata.setData();
    Akshata.getData();
    Employee::getCount();

    Saisha.setData();
    Saisha.getData();
    Employee::getCount();

    Ashish.setData();
    Ashish.getData();
    Employee::getCount();

    return 0;
}*/

//--------------------ARRAYS OF OBJECTS AND PASSING OBJECTS AS FUNCTIONS----------------

/*class Employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 122;
        cout << "Enter the employee id: " << endl;
        cin >> id;
    }
    void getID(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    return 0;
}*/


//passing objects as arguments
/*class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNum(){
        cout << "Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.printNum();
    c2.setData(3,4);
    c2.printNum();
    c3.setDataBySum(c1,c2);
    c3.printNum();
    return 0;
}*/
