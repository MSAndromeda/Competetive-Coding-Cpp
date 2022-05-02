#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int len = s.size();
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for (int i = 0; i < len; i++)
    {
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')    continue;
        cout << "." << s[i];
    }
    return 0;
}