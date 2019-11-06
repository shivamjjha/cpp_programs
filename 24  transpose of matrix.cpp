#include<iostream>

using namespace std;

int main(){
    cout << "Enter value of m and n "
         << "for a mxn matrix: ";
    int m, n;
    cin>> m >> n;

    int arr[m][n];
    
    cout << "Now, fill the matrix, rowwise:\n";
    for (int i = 0; i < m; i++)
    {
        cout << "Row no. " << i+1 << endl;
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    cout << endl 
         << "Matrix is:\n";    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout<< endl;
    cout<< "The transposed matrix is:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            {cout << arr[j][i] << " " ;}
        cout << endl;
    }

    return 0;
}