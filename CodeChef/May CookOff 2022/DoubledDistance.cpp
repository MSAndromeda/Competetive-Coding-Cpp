#include <bits/stdc++.h>

using namespace std;

typedef long long int Andro;

int main(){
    int t,flag=0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <Andro> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        for (int i = 1; i < n-1; i++)
        {
            if(!((a[i]-a[i-1]) == 2*(a[i+1]-a[i]) || 2*(a[i]-a[i-1]) == (a[i+1]-a[i]))){
               flag = 1;
               break; 
            }
        }
        if(!flag)
        cout << "YES" << endl;
        else cout << "NO" << endl;
        flag = 0;
    }
    return 0;
}