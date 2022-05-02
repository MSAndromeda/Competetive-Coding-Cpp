#include <bits/stdc++.h>

using namespace std;

typedef long long int Andro;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        Andro n, x;
        string s;
        cin >> n >> x;
        cin >> s;
        set<Andro> num;
        num.insert(x);
        for (Andro i = 0; i < n; i++)
        {
            if(s[i] == 'L') num.insert(++x);
            else num.insert(--x);
        }
        cout << num.size() << endl;
    }
    
}