#include<iostream>
using namespace std;

class MyClass{
	int id;
	
	public:
		friend void print(MyClass& a);

};

void print(MyClass& a){
	a.id= 0;
	cout<< a.id;
}



int main(){
	MyClass m;
	print(m);
	
	cout<< endl<<  "Shivam Jha"<< endl<< "1805990";
	return 0;
}
