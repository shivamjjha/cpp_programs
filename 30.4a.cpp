/*
    Conversion from military time to civilian time and vice versa using operator overloading
        (using one argument constructor)
*/
#include<iostream>

using namespace std;

class _24hour{
    int h, m;
    public:
        _24hour();
        _24hour(int, int);
        int returnh();
        int returnm();
};

class _12hour{
    int hr, min;
    bool pm;
    public:
        _12hour();
        _12hour(_24hour);
        void display();

};

_12hour:: _12hour(): hr(0), min(0), pm(false)
{}

_12hour:: _12hour(_24hour t){
    int th = t.returnh();

    pm = (th >= 12 ? true: false);
    hr = (th >= 12 ? (th - 12): th);
    min = t.returnm();
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

_24hour:: _24hour(int a, int b): h(a), m(b)
{}

int main(){
    
    _12hour t1;
    _24hour t2(13, 56);
    t1 = t2;
    t1.display();     
    
    return 0;
}