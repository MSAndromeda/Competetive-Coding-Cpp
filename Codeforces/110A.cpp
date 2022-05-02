#include <iostream>

using namespace std;

typedef long long int Andro;

int main(){
    Andro n;
    int c = 0;
    cin >> n;
    while (n)
    {
        int r = n%10;
        if(r == 4 || r == 7)    c++;
        n /= 10;
    }
    if(c == 4 || c == 7)    cout << "YES";
    else cout << "NO";
    return 0;
}