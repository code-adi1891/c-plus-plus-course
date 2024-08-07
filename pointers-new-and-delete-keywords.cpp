#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl; //*(ptr) means dereference the ptr so the value would be the value at adress ptr (4).
  

    //********New Keyword************* */
    float *p = new float(40);
    cout<<"the value at adress p is "<< *(p)<<endl;

    //allocating contigious blocks of memory:
    int *arr = new int[5];
    arr[0] = 0;
    arr[1] = 10;
    *(arr+2) = 20;
    arr[3] = 30;
    arr[4] = 40;
   
    // Delete Operator: frees the blocks of memory which is dynamically allocated
    // delete[] arr;

    cout << "the value of arr[0] is " << arr[0]<<endl;
    cout << "the value of arr[1] is " << arr[1]<<endl;
    cout << "the value of arr[2] is " << arr[2]<<endl;
    cout << "the value of arr[3] is " << arr[3]<<endl;
    cout << "the value of arr[4] is " << arr[4]<<endl;

    
    return 0;
}
