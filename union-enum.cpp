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
    // cout<<m1.car<<endl;
    enum Meal {breakfast, lunch, dinner}; //automatically allots 1st element as 0, 2nd as 1 and so on...
    Meal m1=lunch; //m1=lunch=1 therefore output in q
    cout<<m1<<endl;
    cout<< breakfast <<endl;
    cout<< lunch <<endl;
    cout<< dinner <<endl;
    return 0;
}