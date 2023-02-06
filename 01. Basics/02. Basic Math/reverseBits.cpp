#include<iostream>
using namespace std;

long long reverseBits(int n){
    int pow = 31;
    long long res = 0;
    while (n != 0)
    {
        res += ((n & 1) << pow);
        pow--;
        n = n >> 1;
    }
    return res;
}

int main ()
{
    int n;
    cin >> n;

    int ans = reverseBits(n);
    cout << ans << "\n";
    return 0;
}