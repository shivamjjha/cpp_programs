#include<iostream>

using namespace std;

int sum(int a, int b){
    return (a+ b);
}

int main(){

    int x, y;
    cout << "Enter two numbers : ";
    cin >> x >> y;
    cout << "\nSum of " << x << " and "<< y
         << " is: " << sum(x, y)<< endl;

    return 0;
}