#include<iostream>

using namespace std;

int sum (float a , int b){//here we could also use int a, float a would
    //give the same result as int 3 down there automatically promotes to 
    //float and once this is matched the result is shown.
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum (int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

//calculate the volume of a cube
int volume (int a){
    return (a*a*a);
}
//calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14*r*r*h);
}

//volume of cuboid
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;    
    cout<<"the sum of 3, 6 and 7 is "<<sum(3,6,7)<<endl;    
    cout<<"the volume of cuboid of 3, 6 and 7 is "<<volume(3,6,7)<<endl;    
    cout<<"the volume of cylinder of  6 and 3 is "<<volume(3,6)<<endl;    
    cout<<"the volume of cube of  side 3 is "<<volume(3)<<endl;    
    return 0;
}