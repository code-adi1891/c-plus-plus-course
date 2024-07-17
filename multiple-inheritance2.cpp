#include <iostream>

using namespace std;

// syntax of multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void get_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void get_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "the value of Base1 is " << base1int << endl;
        cout << "the value of Base2 is " << base2int << endl;
        cout << "the sum of these vlaues is " << base2int + base1int << endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
int main()
{
    derived harry;
    harry.get_base1int(25);
    harry.get_base2int(5);
    harry.show();
    return 0;
}