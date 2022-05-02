#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> puzzles(m);

    for (int i = 0; i < m; i++)
    {
        cin >> puzzles[i];
    }
    
    sort(puzzles.begin(),puzzles.end());
    int min = INT_MAX;

    int count = m-n+1;
    for (int i = 0; i < count; i++)
    {
        int j = i+n-1;
        int mini = puzzles[j] - puzzles[i];
        if(min > mini)
            min = mini;
    }
    cout << min;
    return 0;
}