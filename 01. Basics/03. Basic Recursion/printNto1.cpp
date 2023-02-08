#include<iostream>
using namespace std;

void printNTO1(int n)
{
    if(n==0){
        return;
    }
    cout << n << " ";
    printNTO1(n - 1);
}

int main ()
{ 
    int n;
    cin >> n;

    // print n to 1 number 
    printNTO1(n);
    return 0;
}