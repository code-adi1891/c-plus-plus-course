#include<iostream>

using namespace std;

class base1{
    protected:
    int base1int;
    public:
    void print_base1int(int a){
        base1int=a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void print_base2int(int a){
        base2int=a;
    }
};

class derived : public base1 , public base2{
    public:
    void sum(){
        cout<<"the value of base1's int is "<<base1int<<endl;
        cout<<"the value of base2's int is "<<base2int<<endl;
        cout<<"the sum of base1's int and base2's  int is "<<base1int + base2int<<endl;
    }
};


int main(){
    derived asdf;
    asdf.print_base1int(4);
    asdf.print_base2int(4);
    asdf.sum();

    return 0;
}