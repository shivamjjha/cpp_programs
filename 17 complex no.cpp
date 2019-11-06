#include<iostream>
using namespace std;

class complex{
    int r, i;
    public:

    void get(){
        cout<< "Enter real part and imaginary part: ";
        cin>>r>> i;
        //result(p, q);

    }

    complex result(const complex& a, const complex& b){
        complex c;
        c.r= a.r* b.r- a.i* b.i;
        c.i= a.r* b.i+ a.i* b.r;
        return c;
        //show(c);
    }

    void show(){
        cout<< "Ans: "<< r<< " + "<< i<< "i";

    }

};

int main(){
    complex p, q;
    p.get();
    q.get();
    complex res;
    res=  res.result(p, q);
    res.show();


	cout<< endl<<  "Shivam Jha"<< endl<< "1805990";
	return 0;

}


