#include<iostream>
using namespace std;

void printPattern(int n){

    for (int i = (n - 1); i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i * 2; k++)
        {
            cout << "*";
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