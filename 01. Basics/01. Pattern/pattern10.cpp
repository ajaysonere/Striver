#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0;i<n*2;i++){
     if(i < n){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<=i; k++){
            cout << "*" << " ";
        }
        cout << "\n";
     }else{
        for(int k=0; k<i-n; k++){
            cout << " ";
        }
        for(int j=0; j<n*2-i; j++){
           cout << "*" <<" ";
        }
        cout << "\n";
     }
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