#include <bits/stdc++.h>

using namespace std;

int main(){
    int Testcase, count=0;

    cin >> Testcase;

    int* N = new int[Testcase];
    int* K = new int[Testcase];
    int* p[Testcase];

    for (int i = 0; i < Testcase; i++)
    {
        cin >> N[i] >> K[i];
        int* height = new int[N[i]];
        for (int j = 0; j < N[i]; j++)
            cin >> height[j];
        p[i] = height;
    }
    for (int i = 0; i < Testcase; i++)
    {
        for (int j = 0; j < N[i]; j++)
            if(K[i] < *(p[i]+j)) count++;
        cout << count << endl;
        count = 0;
    }
    return 0;
}