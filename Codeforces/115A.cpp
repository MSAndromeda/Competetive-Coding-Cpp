#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)     cin >> a[i];
    int mna, mxa;
    mna = mxa = a[0];
    int maxa = 0, mina = 0;
    for (int i = 1; i < n; i++)
    {
        if(mxa < a[i]){
            mxa = a[i];
            maxa++;
        }
        else if(mna > a[i]){
            mna = a[i];
            mina++;
        }
    }
    cout << (mina + maxa) << endl;
    return 0;
}