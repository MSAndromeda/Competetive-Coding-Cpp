#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long int sumA;
        long int even[100001];
        long int odd[100001];
        int e(0),o(0);
        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0)   even[e++] = a[i];
            else odd[o++] = a[i];
        }
        if(e < o){
            
        }
    }
    return 0;
}