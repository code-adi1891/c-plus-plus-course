#include<iostream>

using namespace std;
class Base{
    protected:  // almost same as private but can be inherited so that the privacy doesn't get compromised.
        int a;
    private:
        int b;
};

/* 
for a protected member:
                        |     public derivation   |   private derivation   |    protected derivation
    1. private   members|     Not Inherited       |   Not Inherited        |    Not Inherited
    2. protected members|     Protected           |   Private              |    Protected
    3. public    members|     Public              |   Private              |    Protected
*/
class Derived : protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<b.a<<endl;  will not work since a is protected in both base and derived classes.
    return 0;
}