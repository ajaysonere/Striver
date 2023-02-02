#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=1 ; i<=n; i++){
        int j=1;
        for(j; j<=i; j++){
            cout << j << " ";
        }
        for(int k=0; k<((n*2)-(i*2)); k++){
            cout << "  ";
        }
        j--;
        for(j; j>=1; j--){
            cout << j  << " ";
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