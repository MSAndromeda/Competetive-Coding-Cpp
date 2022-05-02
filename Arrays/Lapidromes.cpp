#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;

    while (t--)
    {
        string s;
        string lefts;
        string rights;
        cin >> s;
        int l = s.length();
        lefts = s.substr(0,l/2);
        if(l % 2 == 0)  rights = s.substr(l/2);
        else rights = s.substr((l+1)/2);
        int freqL[26] = {0};
        int freqR[26] = {0};
        for (int i = 0; i < lefts.length(); i++)
        {
            freqL[lefts[i] - 'a']++;
            freqR[rights[i] - 'a']++;
        }
        int c = 0;
        for (int i = 0; i < 26; i++)
        {
            if(freqL[i] != freqR[i]){
                c++;
                break;
            }
        }
        if(!c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}