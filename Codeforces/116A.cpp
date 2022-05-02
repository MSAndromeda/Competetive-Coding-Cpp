#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int tramp = 0;
    int max = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        tramp += (b - a);
        if(tramp > max)     max = tramp;
    }
    cout << max << endl;
    return 0;
}