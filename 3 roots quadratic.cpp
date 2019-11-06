#include<iostream>
#include<cmath>
using namespace std;


int main(){

float a, b, c, d, r;

cout<<"Enter the values for a, b and c for ax^2 + bx + c: ";
cin>>a>> b>> c;
cout<< endl;

d= b* b- 4* a* c;

if(d> 0){

    cout<< "Roots are: "<< (-b+ sqrt(d))/ 2/ a<< " and "<< (-b- sqrt(d))/ 2/ a;
}
if(d ==0){
        r= -b/ 2/ a;
    cout<< "Roots are: "<< r<< " and "<< r;
}
else{
    cout<< "Roots are imaginary";
}
cout<<endl<<endl<< "Shivam Jha"<< endl<< "1805990";



return 0;
}

