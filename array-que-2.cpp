#include<iostream>

using namespace std;

int main(){
    int a[100], b[50], c[50];
    for (int i = 0; i < 100; i++)   //array a= 1,2,3,4,....100
    {
        a[i]=i+1;
    }


    int j = 0;
    for (int i = 0; i < 50; i++) //first 50 elements of array a= array b
    {
        b[i] = a[i];
    }

       
    for (int i = 50; i < 100; i++) //copy next 50 elements of array a to array c
        {
        c[j] = a[i];
        j++; 
    }



    cout<<"1st array"<<endl;   //print elements of array b and c
    for (int i = 0; i < 50; i++)
    {
        
        cout<<i<<"="<<b[i]<<endl;
    }



    cout<<"2st array"<<endl;
    for (int i = 0; i < 50; i++)
    {
       
        cout<<i<<"=="<<c[i]<<endl;
    }
    


    return 0;
}