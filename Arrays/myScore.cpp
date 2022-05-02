#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int prob[n];
        int score[n];
        for (int i = 0; i < n; i++)
            cin >> prob[i] >> score[i];
        int max[9] = {0};
        for (int i = 0; i < n; i++)
        {
            if(prob[i] < 9)
            {
                if(max[prob[i]] < score[i]) max[prob[i]] = score[i];
            }
        }
        for (int i = 0; i < 9; i++)
            max[0] += max[i];
        cout << max[0] << endl;
    }
    return 0;
}