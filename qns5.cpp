#include<iostream>

using namespace std;
    
    int a, b;
    int main(){
    cout<<"the number of elements in the array are: "<<endl;
    cin>>a;
    int list[a];
    cout<<"enter all the "<<a<<" elements of the array"<<endl;
    for (int i = 0; i < a; i++)
    {
        cin>>list[i];
    }

    cout<<"input a number from the array "<<endl;
    cin>>b;
    int temp=0;
   for (int i = 0; i < a; i++)
    { 
     if (b==list[i])
     {
        temp++;
     }
     
    }


    cout<<"the number of times element "<<b<<" is repeated is: "<<temp;

    
       
    return 0;
}