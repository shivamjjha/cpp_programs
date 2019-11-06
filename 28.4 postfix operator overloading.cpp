#include<iostream>
using namespace std;

class Tuna{
    int babyTuna;

    public:
        Tuna operator++(int);
        Tuna();
        Tuna(int x);void display(){
            cout << babyTuna << endl;
        }
        
};

Tuna Tuna::operator++(int x){
   return Tuna(++x);
}
Tuna::Tuna(){

}

Tuna:: Tuna(int x){
    babyTuna = x;
}

int main(){
    Tuna t(0), tt;
    tt = t++;
    tt.display();
    //tt.display();
    
    return 0;
}
