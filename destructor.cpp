#include<iostream>

using namespace std;
//destuctor never takes an argument nor does it return any value

int count=0;

class num{
    public:
        num (){
            count++;
            cout<<"this is the time when constructor is called for object number"<<count<<endl;
        }
        ~num(){
            cout<<"this is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"we are inside the main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl; //everything inside "{}"this block will be destroid once executed 
        cout<<"creating two more objects"<<endl;
        num n3, n2; //these would be destorid by destructor once we are outside the block
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to the main"<<endl;
    return 0;
}//now the destructor would destory the n1