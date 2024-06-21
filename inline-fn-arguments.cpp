#include<iostream>
using namespace std;

inline int product(int a, int b){
    /* In this example, product is declared as an inline function. The compiler 
    may choose to replace the call to product(a, b) with return a*b; directly in 
    the main function, depending on its optimization strategy.*/
         
   // Its not recommended to use below lines with inline functions
    static int c=0;// This executes only once
    c=c+1;  // Next time this function is run, the value of c will be retained, every time you will get different result.
    return a*b+c;
}

float moneyReceived(int currentMoney, float factor=1.04){//default arguments should not be in 1st place(should be in extreme right), only the 
//                                                         compulsory arguments are in first place.
    return currentMoney * factor;
}

// int strlen(const char *p){           //string length
                                        //because of const, the string cannot be changed, not even accidently

// }
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    //since the factor is not written, the program will automatically choose factor=1.04...[default arguments]
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    //here the value of factor would be 1.1 and not 1.04 
    return 0;
}
