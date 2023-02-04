#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n*2-1; i++){
        if(i<=n){
            int space = 2 * n - i * 2;
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            for (int k = 0; k < space; k++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }else{
            int space = i*2 - n*2;
            for(int j=0; j<n-(i-n); j++){
                cout << "* ";
            }
            for(int k=0; k<space; k++){
                cout << "  ";
            }
            for(int j=0; j<n-(i-n); j++){
                cout << "* ";
            }
            cout <<"\n";
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