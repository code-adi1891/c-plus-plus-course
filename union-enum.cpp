#include<iostream>

using namespace std;

union money
//same as structure, but provides better memory management because in structure we can set all the 
//properties for an object but in union we can only set value for a single property/attributes.
{
    int rice;
    char car;
    float pounds;

};

int main(){
    // union money m1;   //this is an example of union
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.rice<<endl; // this won't show correct value because it has been overwritten by the m1.car which is c.
    // cout<<m1.car<<endl;
    enum Meal {breakfast, lunch, dinner}; //enum is used for numbering all the elements starting from 0,1,2,3,...
     //automatically allots 1st element as 0, 2nd as 1 and so on...

    Meal m1=lunch; //m1=lunch=1 therefore output is 1
    cout<<m1<<endl;
    cout<<(m1==2)<<endl;
    cout<< breakfast <<endl;
    cout<< lunch <<endl;
    cout<< dinner <<endl;
    return 0;
}