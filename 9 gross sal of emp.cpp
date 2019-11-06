#include<iostream>
using namespace std;

int main(){
int x, y= 0;
cin>> x;

do{
  y= y*10 + x% 10;
  x/= 10;

}
while(x);

cout<< endl<< y;
cout<< "Shivam Jha"<< endl<< "1805990";
return 0;
}