#include<iostream>
using namespace std;

void printNameNTimes(int n){
    if(n==0){
        return;
    }
    cout << "Ajay ";
    printNameNTimes(n-1);
}

int main ()
{
    int n;
    cin >> n;

    // print Name Ajay n times 
    printNameNTimes(n);
    return 0;
}