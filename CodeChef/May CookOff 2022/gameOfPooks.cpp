#include <bits/stdc++.h>

using namespace std;

typedef long long int Andro;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        Andro n;
        cin >> n;
        if(n == 2 || n == 3)
            cout << n-1;
        else cout << n;
        cout << endl;
    }
    return 0;
}