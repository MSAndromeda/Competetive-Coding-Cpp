#include <bits/stdc++.h>

using namespace std;

ostream &operator<<(ostream &os, vector <char> const &c){
    for(auto x : c)
        os << x;

    return os;
}

int main(){
    string s;
    int flag = 0;
    cin >> s;
    int l = s.length();
    vector <char> str;
    for (int i = 0; i < l; i++)
    {
        if (s.substr(i,3) == "WUB"){
            i+=2;
            if(flag)
            {
                str.push_back(' ');
                flag = 0;
            }
            continue;
        }
        flag = 1;
       str.push_back(s[i]);
    }
    cout << str;
    return 0;
}