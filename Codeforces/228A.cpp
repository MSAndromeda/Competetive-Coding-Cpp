#include <bits/stdc++.h>

using namespace std;

int main(){
    int temp;
    set <int> horseShoe;
    for (int i = 0; i < 4; i++)
    {
        cin >> temp;
        horseShoe.insert(temp);
    }
    cout << (4-horseShoe.size()) << endl;
    return 0;
}