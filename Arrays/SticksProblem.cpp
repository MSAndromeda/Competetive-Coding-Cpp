#include <bits/stdc++.h>

using namespace std;

typedef long int Andro;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        set <Andro> num;
        Andro temp;
        for (int i = 0; i < N; i++){
            cin >> temp;
            if(temp)   num.insert(temp);
        }
        cout << num.size() << endl;
    }
    return 0;
}