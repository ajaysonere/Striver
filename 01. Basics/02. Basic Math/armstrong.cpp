#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

string armStrong(int n){
    int copy = n;
    string str = to_string(n);
    int size = str.size();
    int ans = 0;

    while (n != 0)
    {
        int temp = n % 10;
        ans += pow(temp, size);
        n = n / 10;
    }
    return (ans == copy) ? "Yes" : "No";
  }

int main ()
{  
    int n;
    cin >> n;

    string ans  = armStrong(n);
    cout << ans << "\n";
    return 0;
}