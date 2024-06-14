#include<iostream>

using namespace std;

int main(){
    int a [100];
    for (int i = 0; i < 100; i++)
    {
        a[i]=i+1;

    }

    int b[50];
    for (int j = 0; j < 51; j++)
    {
        b[j]=a[j];
    }
    
   
   for (int i = 0; i < 51; i++)
        {
            cout<<i<<" = "<< b[i]<<endl;
        }
    

    int c[50];
    for (int k = 51; k < 100; k++)
    {
        c[k]=a[k];
    }
    
    for (int i = 51; i < 100; i++)
        {
            cout<<i<<" == "<< c[i]<<endl;
        }

    return 0;
}