#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}