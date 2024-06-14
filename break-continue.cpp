#include<iostream>

using namespace std;

int main(){
    // for (int i = 0; i < 4; i++)//for likhte he snippet mil jayega.
    // {
    //         if (i==2)
    //   {
    //     break;//iska matlab hai ki jaise he value 2 aa jayegi to ye break ho jayega,
    //   }//yeha pe aa jayega aur agar aage koi program hai to wo execute hone lagega.
    //   cout<<i<<endl; 
     
    // }
    for (int i = 0; i < 4; i++)
    {
       
        if(i==2){
            continue;//unlike break, ye bas 2 ko skip kar ke aage ke numbers ke liye continue kar deta hai.
        }
         cout<<i<<endl;
    }

    
    return 0;
}