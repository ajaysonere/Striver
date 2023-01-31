#include<iostream>
using namespace std;


/*

12345
1234
123
12
1


*/

void printPattern(int n){
    for(int i=0; i<n;i++){
        for(int j=1; j<=n-i; j++){
            cout << j << " ";
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