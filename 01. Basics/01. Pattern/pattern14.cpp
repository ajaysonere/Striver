#include<iostream>
using namespace std;

void printPattern(int n){
    int index = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i; j++){
            cout<< index << " ";
            index++;
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