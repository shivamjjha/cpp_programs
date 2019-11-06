#include<iostream>
using namespace std;

class P{
    int a, b;
    public:
    P(){
	}
    P(P& a2){
        cout<< "Hey, I ams just a copy constructor ";
        a= a2.a; b= a2.b;
    }

    void get(){
    cin>> a>> b;

    }

};



int main(){
P x;
x.get();

P p(x);

cout<< endl<<  "Shivam Jha"<< endl<< "1805990" << endl;;
return 0;
}
