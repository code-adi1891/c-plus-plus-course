#include<iostream>
#include<cmath>

using namespace std;

    int sqr (int a){
        return a*a; //function to return square of a number
    }

    int main(){
    int x1,y1,x2,y2;
    
    cout << "Enter the value of first coordinate (x1, y1):" << endl;
    cin >> x1 >> y1;
    cout << "Enter the value of second coordinate (x2, y2):" << endl;
    cin >> x2 >> y2;
    
    //calculating square of differences
    int a= sqr(x1-x2);
    int b= sqr(y1-y2);
    
    //calculating distance using euclidean distance formula
    double dist = sqrt (a+b); 

    cout<<"the distance between two points is "<<dist<<endl;    
    return 0;
}