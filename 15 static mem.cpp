#include<iostream>
using namespace std;

class MyClass{
		const static int dept_id= 2256;	
		int emp_no;
	
	public:
		void get_id(){
			cin>> emp_no;
		}
		void show_id(){
			cout<< emp_no<< endl;
		}
		
};




int main(){
	MyClass o[3];
	
	for(int i=0;i<3; ++i)
		o[i].get_id();
		
	for(int i=0;i<3; ++i)
		o[i].show_id();
			
	cout<< endl<<  "Shivam Jha"<< endl<< "1805990";
	return 0;
}
