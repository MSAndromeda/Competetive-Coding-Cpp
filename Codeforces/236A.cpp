#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();

    char temp;
    set <char> letter;
    for (int i = 0; i < len; i++)
    {
        temp = s[i];
        letter.insert(temp);
    }
    if((letter.size() % 2) == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}