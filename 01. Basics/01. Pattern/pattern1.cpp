#include<iostream>
using namespace std;

/*
     print this pattern

     * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *


 */

void printSquarePattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
}

int main ()
{
    int n;
    cin >> n;

    // print square pattern 
    printSquarePattern(n);
    return 0;
}