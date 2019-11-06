#include<iostream>
#include<string>
using namespace std;

class players{

    int score;
    string name;

    public:
        void get_info(){
            cout<<"Enter name: ";
            cin>> name;

            cout<< "Enter score: ";
            cin>> score;

        }

        void sorts(players p[], int n){

            for(int i=0; i<n-1; ++i){
                int ts;
                string tn;

                if(p[i+ 1].score> p[i].score){

                    ts= p[i+ 1].score;
                    p[i+ 1].score= p[i].score;
                    p[i].score= ts;

                    tn= p[i+ 1].name;
                    p[i+ 1].name= p[i].name;
                    p[i].name= tn;


                }

            }

        }

        void show(players p[], int n){
            cout<<endl<<  "Sorted result";

            for(int i=0; i<n; ++i){
                cout<< endl<< p[i].name<< "\t"<< p[i].score<< endl;
            }


        }
};

int main(){
    int n;
    cout<< "How many players?: ";
    cin>> n;
    players p[n], t;

    for(int i=0; i<n; ++i){
        p[i].get_info();
    }

    t.sorts(p, n);
    t.show(p, n);

	cout<< endl<<  "Shivam Jha"<< endl<< "1805990";
	return 0;

}


