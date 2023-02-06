#include<iostream>
using namespace std;

string isPalindrom(int n)
{
    // Code here.
    int rev = 0, i = 0, t = n;
    while (t)
    {
        int r = t % 10;
        rev = rev * 10 + r;
        t = t / 10;
    }
    return rev == n ? "Yes" : "No";
}

int main ()
{
    int n;
    cin >> n;

    string ans  = isPalindrom(n);
    cout << ans << "\n";
    return 0;
}