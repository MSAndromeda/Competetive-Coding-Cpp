#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t1;
    cin >> n;
    int index[100001];
    for (int i = 1; i <= n; i++)
    {     
        cin >> t1;
        index[t1] = i;
    }
    int q;
    cin >> q;
    long long petya(0), vesya(0);
    while (q--)
    {
        cin >> t1;
        vesya += index[t1];
        petya += (n+1 - index[t1]);
    }
    
    cout << vesya << " " << petya;
    return 0;
}