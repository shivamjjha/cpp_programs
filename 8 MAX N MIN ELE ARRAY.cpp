#include<iostream>
using namespace std;

int main(){
cout<<"Enter number of elements in array: ";
int n;
cin>> n;

int arr[n];

cout<<"Enter elements of array: "<< endl;

for(int i= 0; i< n; ++i)
    cin>> arr[i];

int max= arr[0], min= arr[0];

for(int i= 0; i< n; ++i)
{if(arr[i]< min)
        min= arr[i];

    if(arr[i]> max)
        max= arr[i];
}
cout<< endl<< "Max. and min. elements in the array are "<< max<< " and "<< min<< " respectively";

cout<< endl<< "Shivam Jha"<< endl<< "1805990";
return 0;
}
