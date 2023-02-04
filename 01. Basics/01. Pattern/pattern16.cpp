#include<iostream>
using namespace std;

/*

ABCDE
ABCD
ABC
AB
A

*/

void printPattern(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0; j<n-i; j++){
            cout << char(ch+j);
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