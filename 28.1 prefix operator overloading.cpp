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

void operator ++(){

   ++eggs;

    }
};
int main(){
    Chicken myChick(3), myChick2;
    ++myChick;
    cout << myChick.displayEggs()<< endl;
    //cout << "hi"<< endl;

    return 0;
}