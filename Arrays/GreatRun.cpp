#include <bits/stdc++.h>

using namespace std;

typedef int Distance;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        Distance n, k;
        cin >> n >> k;
        int girls[n];
        for (int i = 0; i < n; i++)
            cin >> girls[i];
        int maxgirls = 0,temp=0;
        int con = n-(k-1);
        for (int i = 0; i < con; i++)
        {
            for (int j = 0; j < k; j++)
            {
                temp += girls[i+j];
            }
            if(maxgirls<temp) maxgirls = temp;
            temp = 0;
        }
        cout << maxgirls << endl;
    }
    return 0;
}