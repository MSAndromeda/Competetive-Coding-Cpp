#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int l1 = 0, l0 = 0, r1 = 0, r0 = 0;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        if(l == 1) l1++;    else l0++;
        if(r == 1) r1++;    else r0++;
    }
    int min = (l1<l0)? l1:l0;
    min += (r1<r0)? r1:r0;
    cout << min << endl;
    return 0;
}