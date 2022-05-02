#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, c(0), max(0);
    cin >> n;
    int pedal[n];
    for (int i = 0; i < n; i++)     cin >> pedal[i];
    
    cin >> m;
    int temp;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        for (int j = 0; j < n; j++){
            if(temp % pedal[j] == 0){
                int x = temp/pedal[j];
                if(x>max){
                    max = x;
                    c = 1;
                }
                else if(x == max)   c++;
                break;
            }
        }
    }
    cout << c;
    return 0;
}