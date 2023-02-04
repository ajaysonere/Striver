#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0;i<n*2; i++){
      if(i<n){
          int j = 0;
          for (j; j < n - i; j++)
          {
              cout << "*";
          }
          for (int k = 0; k < i * 2; k++)
          {
              cout << " ";
          }
          for (j= j-1; j>=0; j--){
             cout << "*";
          }
          cout <<"\n";
      }else{
        for(int k=0; k<=i-n; k++){
           cout << "*";
        }
        for(int k=0; k<(n-(i-n))*2-2; k++){
            cout<< " ";
        }
        for(int k=0; k<= i-n ; k++){
            cout << "*";
        }
        cout << "\n";
      }
    }
}


int main ()
{
    int n;
    cin >> n;

    printPattern(n);
    return 0;
}