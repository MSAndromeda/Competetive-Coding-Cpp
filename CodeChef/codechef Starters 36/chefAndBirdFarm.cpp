#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;

    while (t--)
    {
        int x, y, z, chick, duck;
        cin >> x >> y >> z;
        chick = z % x;
        duck = z % y;
        if(!chick && !duck) cout << "ANY";
        else if(!chick) cout << "CHICKEN";
        else if(!duck) cout << "DUCK";
        else cout << "NONE";
        cout << endl;
    }
    return 0;
}