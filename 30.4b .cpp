/*
    Conversion from military time to civilian time and vice versa using operator overloading
        (using operator function)
*/
#include<iostream>

using namespace std;

class _24hour{
    int h, m;
    public:
        _24hour();
        _24hour(int, int);
        operator _12hour();
        int returnh();
        int returnm();
};

class _12hour{
    int hr, min;
    bool pm;
    public:
        _12hour();
        _12hour(int, int);
        void display();

};

_12hour:: _12hour(): hr(0), min(0), pm(false)
{}

_12hour:: _12hour(int HR, int MIN): hr(HR), min(MIN){
    pm = (hr >= 12) ? true: false;
}

void _12hour:: display(){
    cout << hr << endl << min << endl << (pm == true ? "pm" : "am") << endl ;
}

_24hour:: _24hour(): h(0), m(0) 
{}

int _24hour:: returnh(){
    return h;
}

int _24hour:: returnm(){
    return m;
}

//operator function
_24hour:: _24hour(int a, int b): h(a), m(b)
{}

_24hour:: operator _12hour(){
    return _12hour(h, m);
}

int main(){
    
    _12hour t1;
    _24hour t2(13, 56);

    t1 = t2; // calls operator func to convert from t2 to t1
    
    t1.display();     
    
    return 0;
}