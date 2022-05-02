#include <bits/stdc++.h>

using namespace std;

int main(){
    string guest, host, pile;
    cin >> guest >> host >> pile;

    int glen = guest.length();
    int hlen = host.length();
    int plen = pile.length();

    if((glen+hlen) != plen){
        cout << "NO";
        return 0;
    }
    int OriFreq[26]={0};
    int PileFreq[26]={0};
    for (int i = 0; i < glen; i++)      OriFreq[guest[i] - 'A']++;
    for (int i = 0; i < hlen; i++)      OriFreq[host[i] - 'A']++;
    for (int i = 0; i < plen; i++)      PileFreq[pile[i] - 'A']++;

    for (int i = 0; i < 26; i++)
    {
        if(OriFreq[i] != PileFreq[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}