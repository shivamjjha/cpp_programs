#include<iostream>
using namespace std;

class times{

public:
    void print_time(int hr,int mi,int se){

    cout<< "The time in hh:mm:ss format is: "<< hr<< ": "<< mi<< ": "<< se<< endl;

    }

    void check_time(int hr,int mi,int se){
        if(hr<=23 && mi<= 59 && se<= 59)
            print_time(hr, mi, se);
        else
            cout<< "Wrong time entered!";
    }

};


int main(){
int h, m, s;

cout<< "Enter time in hours, minutes and seconds: ";
cin>> h>> m>> s;

times t;
t.check_time(h, m, s);

cout<< endl<< "Shivam Jha"<< " 1805990";

return 0;
}
