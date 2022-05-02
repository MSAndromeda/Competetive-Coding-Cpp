#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int sum = x+y;
        if(z >= sum)cout << 2;
        else if(z >= x)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}