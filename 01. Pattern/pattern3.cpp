#include<iostream>
using namespace std;

/*

1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

*/

void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
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