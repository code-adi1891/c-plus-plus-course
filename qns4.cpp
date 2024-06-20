#include<iostream>

using namespace std;
    
    int a;  
    int main(){
    cout<<"the number of elements in the array are: "<<endl;
    cin>>a;
    int list[a];
    cout<<"enter all the "<<a<<" elements of the array"<<endl;
    for (int i = 0; i < a; i++)
    {
        cin>>list[i];
    }
    cout<<"the greatest number in the array is: ";
    int temp;
    for (int i = 1; i < a; i++)
    {
     list[0]=temp;
     if (temp<list[i])
     {
        temp=list[i];
     }
     else{
        temp=list[0];
     }
    }
    cout<<temp;
     
    
       
    return 0;
}