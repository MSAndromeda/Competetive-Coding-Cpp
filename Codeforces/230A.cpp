#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;

    vector <pair<int,int>> data;
    for(int i = 0; i < n; i++) {
        int first,second;
        cin >> first >> second;
        data.push_back({first,second});
    }

    sort(data.begin(),data.end());
    
    for (auto curr : data)
    {
        const int first = curr.first, second = curr.second;
        if(s > first){
            s += second;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}