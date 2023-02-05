#include<iostream>
using namespace std;

int countEvenlyDigit(int n){
    int digit = n;
    int count = 0;
    while(n>0){
        int temp = n%10;
        if(temp != 0){
          if(digit%temp == 0){
               count++;
           }
        } 
        n = n/10;
    }
    cout << count << "\n";
    return count;
}

int main ()
{
    cout << "Count Number Of Digits "<< "\n";
    int n;
    cin >> n;

    int ans = countEvenlyDigit(n);
    cout << ans << "\n";
    return 0;
}