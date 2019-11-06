#include<iostream>
using namespace std;

class Student{
    int marks[2];

    public:
    void get_marks();

    void calc_per();
};

void Student:: calc_per()
{
        cout<< endl<< "Your perc is: ";
        int total= 0;
        for(int i= 0; i< 3; ++i)
            total+= marks[i];
        cout<< total/ 3;
    }
    void Student:: get_marks(){
        cout<< "Enter marks for 3 subjects: ";
        for(int i= 0; i< 3; ++i)
            cin>> marks[i];

    }

int main(){
    Student s1;
    s1.get_marks();
    s1.calc_per();

    cout<<endl<< "Shivam Jha"<< endl<< "1805990";

    return 0;
}

