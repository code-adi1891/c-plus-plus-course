#include <iostream>

using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// derived class SYNTAX:

/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}

{
    class members/methods/etc...
}*/
// visibility mode    --> default visibility mode is private.
// private visibility --> if we inherit it privately... then public members of my base class would become private members of my derived class.
// public visibility  --> if we inherit it publically... then public members of my base class would become public members of my derived class.
//                    --> private members of base class are never inherited.

//************Creating a programmer class derived from employee base class************** */
class Programmer : public Employee
{ // if we didn't inherited it publically, we won't be able to print the skillF.id, even if it is a publuc member, it would be inherited as private in derived class.
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}