#include <bits/stdc++.h>

using namespace std;

int main(){
    int m = 9;
    int n = ceil(9/2.0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i > j) cout << " ";
            else cout << "*";
            // cout << "( " << i << ", " << j << " )  ";
        }
        cout << endl;
        m -= 1;
    }
    return 0;
}