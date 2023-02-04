#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0;i<n*2-1;i++){
       if(i<n){
          for(int j=0; j<=i; j++){
              cout << "*" << " ";
          }
          cout << "\n";
       }else{
        for(int j=0; j<n*2-i-1; j++){
            cout << "*" << " ";
        }
        cout << "\n";
       }
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