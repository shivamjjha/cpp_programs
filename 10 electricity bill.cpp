/*
#ElectricityBill
first 100: 1.20 per unit
next 200: 2 per unit
next 300: 3 per unit
*/

#include<iostream>
using namespace std;

class CalcBill{
    int units;

public:
    float get_units(){
        cout<< "Enter no. of units consumed: ";
        cin>> units;
        return calc_bill();
    }

    float calc_bill(){

        cout<< "Your bill is: ";
        if(units<= 100)
                return (units* 1.2);
        else if(units<= 300)
                return (120+ (units- 100)* 2);
        else if(units<= 600)
                return (620+ (units- 300)* 3);
    }

};

int main(){
CalcBill c;
cout<< c.get_units()<< endl;


cout<< "Shivam Jha"<< endl<< "1805990";
return 0;
}
