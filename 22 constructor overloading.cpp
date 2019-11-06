#include<iostream>
using namespace std;

class P{
    int a, b;
    public:
    P(){
    	cout<< endl<<  "Default constructor"<< endl;
	}
    P(P& a2){
        cout<< "Hey, I ams just a copy constructor "<< endl;;
        a= a2.a; b= a2.b;
    }
	P(int x, int y){
		cout<< "Parameterized constructor"<< endl;;
		a=x;b=y;
		
	}
    void get(){
    cin>> a>> b;

    }

};



int main(){
cout<< "To show constructor overloading";

P x;
x.get();
P p1(1, 2);
P p(x);

cout<< endl<<  "Shivam Jha"<< endl<< "1805990";
return 0;
}
