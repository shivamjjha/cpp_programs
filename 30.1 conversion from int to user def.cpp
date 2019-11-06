#include<iostream>

using namespace std;

class foo{
    int a;
    public:
        foo();
        foo(int);
        void display();
};

foo::foo(){

}

foo:: foo(int x){
    a = x;
}

void foo:: display(){
    cout << a << endl;
}

int main(){
    foo f;
    int x = 3;
    f = x; //equals f = foo(x);
    f.display();

    return 0;
}