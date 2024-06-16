#include<iostream>

using namespace std;

int sum (int a, int b){
    int c = a+b;
    return c;

}

void swap (int a, int b){  //temp a b
    int temp = a;          //4   4  5   
    a = b;                 //4   5  5
    b = temp;              //4   5  4 
}
void swapPointer (int* a, int* b){   //temp a b
    int temp = *a;                   //4   4  5   
    *a = *b;                         //4   5  5
    *b = temp;                       //4   5  4 
}


// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    
}
int main(){
    int x=4, y=5;
    cout<<"the sum of 4 and 5 is " <<sum(x,y)<<endl;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap (x,y); //now the values of x and y would be coppied to a and b in the 
    //above function
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;//thats why 
    //printing x and y will give same results, because the values of a and b are 
    //swapped which was coppied from the formal parameters x and y.

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);   //This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;    
    
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}