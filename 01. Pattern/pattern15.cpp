#include<iostream>
using namespace std;

/*

A
AB
ABC
ABCD
ABCDE

*/

void printPattern(int n){
      char ch = 'A';
      for(int i=0;i<n;i++){
        for(int j=0; j<=i; j++){
            cout << char(ch+j);
        }
        cout << "\n";
      }
}


int main ()
{
    int n;
    cin >> n;

    // print pattern
    printPattern(n);
    return 0;
}