#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<= n-i; j++){
            cout << " ";
        }
        char ch = 'A';
        int breakPoint = (i*2+1)/2;
        for(int j=1; j<=i*2-1; j++){
            cout << ch;
            if(j < breakPoint){
                ch++;
            }else{
                ch--;
            }
        }
        for(int j=1; j<= n-i; j++){
            cout << " ";
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