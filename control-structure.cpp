#include<iostream>

using namespace std;
//******************EXAMPLE OF SELECTION STRUCTURE*******************
//****** SELECTION CONTROL STRUCTURE:
//1. IF ELSE-IF ELSE LADDER******** 
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
   /* if(age<18){
        cout<<"you cannot come to my party"<<endl;
    }
 else if(age==18){
    cout<<"you are barely eligible to come to my party"<<endl;
 }
   else{
        cout<<"you can come to my party"<<endl;
    }*/

    //2. SWITCH CASE STATEMENTS*********

    switch (age)
    {
    case 18:
        cout<<"you are just 18"<<endl;
         break; //break:jaha pe ho, waha se bahar aajana hai
    case 22:
         cout<<"you are just 22"<<endl;
         break; //agar break nahi hota to sare ke saare output print ho jayega.
    case 2:
         cout<<"you are just 2"<<endl;
         break; //jaise he ye match hoga to program ka control idhar se nikal ke neeche aajayega.
         
    default:
     cout<<"no special cases"<<endl;
        break;
    }//yeha....... 





 
    return 0;
}