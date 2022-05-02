#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char S[n];
        char R[n];
        for(int i = 0; i < n; i++){
            cin >> S[i];
        }
        for(int i = 0; i < n; i++){
            cin >> R[i];
        }
        int check[2] = {0};
        for (int i = 0; i < n; i++)
        {
            if(S[i] == '1')check[0]+=1;
            if(R[i] == '1')check[1]+=1;
        }
        if(check[0] == check[1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}