#include<iostream>
using namespace std;

class Chicken{
    int eggs;

public:

Chicken(){eggs = 0;}
Chicken(int x){eggs = x;}

int displayEggs(){
    return eggs;
}

Chicken operator ++(){
   /*Creating a temporary temp object to acheive results
    
   return(Chicken(++eggs)); */

    Chicken tempChick;
    
    tempChick.eggs = ++eggs;

    return tempChick;
    }
};
int main(){
    Chicken myChick(3), myChick2;
    myChick2 =  ++myChick;
    cout << myChick2.displayEggs()<< endl;
    //cout << "hi"<< endl;

    return 0;
}