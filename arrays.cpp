#include<iostream>

using namespace std;

int main(){
    int marks[4] = {23,45,56,89};//yeha pe "[]" is bracket me 4 na bhi likhe to compiler samajh jayega 
    int mathmarks[4];
    mathmarks[0]= 2278;
    mathmarks[1]= 738;
    mathmarks[2]= 378;
    mathmarks[3]= 578;
    
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    cout<<"these are marks"<<endl;
    marks[2]=2233;   //sabse last me jo value assign karenge wo he print hogi, bhale he uppar marks 2 ki value 56 rakh di hai.
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

        // for (int i = 0; i < 4; i++)
        // {
        //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        // }


            // int i=0;
            // while (i<4)
            // {
            //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
            //     i++;
            // i+=1 means i is updated by one value in every iteration. means i=i+1
            // }
   

                 // int i=0;
                 //  do
                 //  {
                 //      cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
                 //      i++;
                 //  } while (i<4 
    


    //**********pointers and arrays*********'
    int* p = marks;
    cout<<"the value of marks[0] [*(p  )] is "<<*p  <<endl;
    cout<<"the value of marks[1] [*(p+1)] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] [*(p+2)] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] [*(p+3)] is "<<*(p+3)<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    
    return 0;
}