#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if((x*10) < y) cout << "Disposable";
        else cout << "Cloth";
        cout << endl;
    }
    return 0;
}