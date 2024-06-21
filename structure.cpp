#include<iostream>

using namespace std;

    typedef struct employee //typedef ka kaam hai data type ka naam change karna. 
    //in this case data type ka naam ep kar diya hai
    //typedef aur ep hata denge to zada likhna padega par program same he rahega
    {
        int eId;
        char favchar;
        float salary;
    } ep;  //agar yeha pe ep nahi likha hota to neeche ep harry nahi likh sakte
    
int main(){
    ep harry; // isme bhi ep ke jagh struct employee likhna padta
    struct employee shubham;//yeha pe example ke liye struct employee likha hai, ep bhi likh sakte the.
    struct employee rohan;
    harry.eId =1;
    harry.favchar='c';
    harry.salary=150;

    cout<<"the value of salary is "<<harry.salary<<endl;
    cout<<"the value of favchar is"<<harry.favchar<<endl;
    cout<<"the value of employee id is "<<harry.eId<<endl;
    return 0;
}