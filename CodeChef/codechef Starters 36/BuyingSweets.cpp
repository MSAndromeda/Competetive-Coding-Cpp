#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


int main(){
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        ll r;
        cin >> n >> r;
        vector <ll> A(n),B(n);

        for(int i=0; i < n; i++) cin >> A[i];
        for(int i=0; i < n; i++) cin >> B[i];

        vector<pair<ll,ll>> data;

        // Two Ways to do the Same thing
        // for(int i=0; i < n; i++){
        //     ll eff_Cost = A[i]-B[i];
        //     data.push_back({eff_Cost,A[i]});
        // }
        for(int i=0; i < n; i++){
            data[i] = make_pair(A[i]-B[i],A[i]);
        }
        
        sort(data.begin(),data.end());

        long int count(0);
        for (auto curr : data)
        {
            const ll Eff_COst = curr.first, OriginalCost = curr.second,
            Cash_Back = OriginalCost - Eff_COst;
            if (r < OriginalCost)   continue;
            r -= OriginalCost;
            count++;
            count += r/Eff_COst;
            r %= Eff_COst;
            r += Cash_Back;
        }
        cout << count << endl;
    }
    return 0;
}