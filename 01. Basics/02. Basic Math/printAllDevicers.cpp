#include<iostream>
using namespace std;

int main ()
{
 int n;
 cin >> n;

 long long sum  =0;
 for(int i=1; i<=n; i++){
        int mod = n/i;
        sum += mod*i;
 }

 cout << sum << "\n";
 return 0;
}