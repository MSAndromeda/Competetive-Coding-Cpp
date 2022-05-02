#include <bits/stdc++.h>

using namespace std;

typedef long long int Andro;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        Andro cost[26]={0}, totcost=0;
        int Freq[26]={0};
        for (int i = 0; i < 26; i++)
            cin >> cost[i];
        cin >> s;
        for (int i = 0; i < s.size(); i++)  Freq[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            if(!Freq[i]) totcost += cost[i];
        cout << totcost << endl;
    }
    return 0;
}