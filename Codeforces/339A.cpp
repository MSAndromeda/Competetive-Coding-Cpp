#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();

    if(len == 1){
        cout << s;
        return 0;
    }

    int num[3] = {0};
    for (int i = 0; i < len; i+=2)
    {
        if(s[i] == '1')     num[0]++;
        else if(s[i] == '2')    num[1]++;
        else    num[2]++;
    }


    string res = "";
    for (int i = 1; i <= num[0]; i++)     res += "1";
    for (int i = 1; i <= num[1]; i++)     res += "2";
    for (int i = 1; i <= num[2]; i++)     res += "3";

    int rlen = res.length();
    for (int i = 0; i < rlen; i++)
    {
        if(i!=rlen-1)cout << res[i] << "+";
        else cout << res[i];
    }
    
    return 0;
}