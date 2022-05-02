#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int c = d;
    if(k == 1||l == 1||m == 1||n == 1){
        cout << c;
        return 0;
    }

    else if(k == 2||l == 2||m == 2||n == 2){
        for (int i = 1; i <= d; i+=2)   if(i%k != 0 && i%l != 0 && i%m != 0 && i%n != 0)c--;
        cout << c;
        return 0;
    }
    for (int i = 1; i <= d; i++)   if(i%k != 0 && i%l != 0 && i%m != 0 && i%n != 0)c--;
    cout << c;
    return 0;
}