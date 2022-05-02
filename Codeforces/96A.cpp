#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 1;
    int len = s.size();

    for (int i = 1; i < len; i++)
    {
        if(s[i-1] == s[i]){
            count++;
            if(count == 7){
                cout << "YES";
                return 0;
            }
        }
        else count = 1;
    }
    cout << "NO";
    return 0;
}