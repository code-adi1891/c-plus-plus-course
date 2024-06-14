#include<iostream>

using namespace std;

int glo= 6; //iski cout me kam importance hai, ye global variable hai
void sum(){
    int a;
    cout<<"glo ki global value_"<<glo; //kyuki yeha koi glo naam ka local variable nahi hai isliye global variable ki value aayi hai.
}
    int main(){
    int glo=19; //yeha pe iski zada importance hai kyuki ye local variable hai
    bool z= true;
    sum(); //jab code run hota hai(main se start ho kar) yeha pe aane ke baad ye uppar void sum ke paas jata hai.
    cout<<"\n value of local glo is_"<<glo<<"is"<<z;//kyuki z ki value true hai isliye output me 1 aaya hai, false ke liye output=0
    return 0;
    }
