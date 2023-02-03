#include<iostream>
using namespace std;

/*

A
BB
CCC
DDDD
EEEEE

*/

void printPattern(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0; j<=i; j++){
             cout << char(ch+i);
        }
        cout << "\n";
    }
}

int main ()
{
    int n;
    cin >> n;

    printPattern(n);
    return 0;
}