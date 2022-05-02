#include <bits/stdc++.h>

using namespace std;

typedef long long int Andro;

int main(){
     int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        Andro A[n];
        Andro B[n];
        Andro C[n];

        for (long int i = 0; i < n; i++)
            cin >> A[i];
        for (long int i = 0; i < n; i++)
            cin >> B[i];
        for (long int i = 0; i < n; i++)
            cin >> C[i];
        
        int Ak, Bk;
        cin >> Ak >> Bk;
        Andro MaxAi[n] = {0};
        Andro MaxBi[n] = {0};
        Andro sum = 0;
        for (long int i = 0; i < n; i++)
        {
            if(A[i] > B[i] && A[i] > C[i])
                MaxAi[i] = i;
            else if(B[i] > C[i])
                MaxBi[i] = i;
            else sum += C[i];
        }
        cout << sum << endl;
    }
    return 0;
}