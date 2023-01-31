#include<iostream>
using namespace std;


/*

    *
   **
  ***
 ****
*****


*/

void printPattern(int n){
    for(int i=0;i<n;i++){
        int j=0;
        for(j; j<n-i-1; j++){
           cout << " ";
        }
        for(j ; j<n; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main ()
{
    int n;
    cin >> n;
    

    // print Pattern 
    printPattern(n);
    return 0;
}