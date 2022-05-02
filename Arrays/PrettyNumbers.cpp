#include <bits/stdc++.h>

using namespace std;

int main(){
    int TestCase, count = 0;

    cin >> TestCase;
    int* L = new int[TestCase];
    int* R = new int[TestCase];
    for (int i = 0; i < TestCase; i++)
        cin >> L[i] >> R[i];
    
    for (int i = 0; i < TestCase; i++)
    {
        for (int j = L[i]; j <= R[i]; j++)
        {
            if(j % 10 == 2 || j % 10 == 3 || j % 10 == 9) count++;
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}