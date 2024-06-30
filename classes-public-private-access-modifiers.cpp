#include<iostream>

using namespace std;

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C language)
// structures had limitations:
//      - all members were public
//      - you cannot add methods in structures
// classes --> structures (from c language) + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed (bina typedef lagaye bhi structure ke variable declare kar sakte hai)
// you can also declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 ...this makes no sense if salary is private

class Employee
{
    private:
        int a,b,c;//private access modifier
    public:
        int d,e;//public access modifier
        void setData(int a1,int b1,int c1);//(declaration) we could have defined all functions here itself
        //or we can do it like this, define setdata here and declare that we are going to use a1,b1,c1 later.
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){//use scope resolution operator after employee, 
//to specify that the set data function is made inside employee
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee harry;
    harry.d=34;//since d and e are public so we can directly assign a=84
    //harry.a=89; -->this will throw error as 'a' is private
    harry.e=89;
    
    harry.setData(1,2,3);//but a1,b1,c1 are private therefore we have to write .setData
    harry.getData();

    return 0;
}