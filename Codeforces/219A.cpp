// #include <bits/stdc++.h>

// using namespace std;


// int main(){
//     int n;
//     string s;

//     cin >> n >> s;

//     int len = s.size();

//     if(len%n != 0){
//         cout << -1;
//         return 0;
//     }

//     vector <int> frq(26);
//     set <char> str;
//     for (int i = 0; i < len; i++)
//     {
//         frq[s[i] - 'a']++;
//         str.insert(s[i]);
//     }
//     set <int> check;
//     for (int i = 0; i < 26; i++)
//     {
//         if(!frq[i]) continue;
//         check.insert(frq[i]);
//     }
//     if(check.size() == 1){
//         string res;
//         set <char>::iterator itr;
//         for(itr = str.begin(); itr != str.end(); itr++)     res += *itr;
//         for (int i = 0; i < n; i++)     cout << res;
//         return 0;
//     }
//     cout << -1;
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int k,count=0;
	char ch;
	cin>>k;
	string s;
	cin>>s;
	int l = s.size();
	sort(s.begin(), s.begin()+s.size());

	for(int i=0; i < s.size(); i++){
	    if(i%k==0){
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}

	if(l==count && count%k==0)
    {
        string res;
	    for(int l = 0; l < s.size(); l += k)    res += s[l];
	    for(int i = 0; i < k; i++)    cout << res;
	}
    else
    {
	    cout<<"-1";
	}
	return 0;
}