#include<iostream>
using namespace std;

void printNumberTillN(int n){
    if(n==0){
        return ;
    }
    printNumberTillN(n-1);
    cout << n << " ";
}

int main ()
{
    int n;
    cin >> n;

    // print number of 1 to n ;
    printNumberTillN(n);
    return 0;
}