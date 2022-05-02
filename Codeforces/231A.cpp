#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, c;
    cin >> n;
    while (n--)
    {
        int a[3];
        for(int i = 0; i < 3; i++)
            cin >> a[i];
        int sum = 0;
        for(int i = 0; i < 3; i++)
            sum += a[i];
        if(sum>1){
            c++;
        }
    }
    cout << c;
    return 0;
}