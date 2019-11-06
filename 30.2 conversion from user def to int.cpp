#include<iostream>

using namespace std;

class whale{
    int babyWhale;
    public:
        whale();
        operator int() const{
            return babyWhale;
        }
        whale(int);
        void display(){cout << babyWhale << endl;}
};

whale:: whale(){
    babyWhale = 0;
}

whale:: whale(int x): babyWhale(x)
{}

int main(){


    
    int x = 3; whale fObj;

    fObj = x; //primitive to class type
    fObj.display();

    //class obj(user def) to int(primitive)
    x = fObj;
    // or x = static_cast<int>(fObj);

    cout << x << endl;
    
    return 0;
}