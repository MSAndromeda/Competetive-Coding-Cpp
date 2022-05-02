#include <bits/stdc++.h>

using namespace std;

int testfunc(int r){
    if(r == 0 || r == 6 || r == 9) return 6;
    else if(r == 2 || r == 3 || r == 5) return 5;
    else if(r == 1) return 2;
    else if(r == 4) return 4;
    else if(r == 7) return 3;
    else if(r == 8) return 7;
}

int main(){
    int testcases,sum=0,sticks=0;

    cin >> testcases;

    int SumArr[2][testcases];
    for (int i = 0; i < testcases; i++)
        cin >> SumArr[0][i] >> SumArr[1][i];
    for (int i = 0; i < testcases; i++)
    {
        sum = SumArr[0][i] + SumArr[1][i];
        while (sum)
        {
            int r = sum % 10;
            sticks += testfunc(r);
            sum /= 10;
        }
        cout << sticks << endl;
        sticks = 0;
    }
    return 0;
}