#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=0;i<n;i++){
        if(i==0){
            for(int j=0; j<n;j++){
                cout << "*";
            }
            cout << "\n";
        }else if(i==n-1){
            for (int j = 0; j < n; j++){
                cout << "*";
            }
            cout << "\n";
        }else{
            int j=0;
            cout << "*";
            for(j=j+1; j<n-1; j++){
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }
    }
}


// Another way

void printPattern1(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i ==0 || j == 0 || i == n-1 || j == n-1){
                cout << "*";
            }else{
              cout << " ";
            }
        }
        cout << "\n";
    }
}

int main(){
     int n;
     cin >> n;
     // print pattern
     printPattern(n);
     cout << "\n";
     printPattern1(n);
     return 0;
}