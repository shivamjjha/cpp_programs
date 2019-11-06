#include<iostream>
using namespace std;

class Salary{
float sal;

public:
    void get_sal();
    void print_sal();

};

void Salary:: get_sal(){
    cout<< "Enter salary of employe: ";
    cin>> sal;
    print_sal();
}

void Salary:: print_sal(){
    cout<<"Salary is: "<< sal;
}

int main(){
    Salary s;
    s.get_sal();
    cout<<endl<< "Shivam Jha"<< endl<< "1805990";

    return 0;
}

