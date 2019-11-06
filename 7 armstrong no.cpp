#include<iostream>
#include<cmath>
using namespace std;


int main(){
int x, t= 0, n;
cout<< "Enter a number: ";
cin>> x;
n= x;
while(x){

    int r= x% 10;
    t+= r*r*r;
    x/= 10;
}
if(t== n){
    cout<< "is an armstrong no."<< endl;

}
else{

    cout<< "is not an armstrong no.";
}
cout<<endl<< "Shivam Jha"<< endl<< "1805990";



return 0;
}

