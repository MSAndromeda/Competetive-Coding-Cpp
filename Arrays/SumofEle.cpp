#include <bits/stdc++.h>

using namespace std;

int main(){
    int A[7] =  {4, 8, 6, 9, 5, 2, 7};
    int sum(0);

    for (auto x : A)
        sum += x;
    cout << "Sum of Elements : " << sum << endl;

    int max = INT_MIN;
    for (auto x : A)
        if(max < x) max = x;

    cout << "Maximum Element : " << max << endl;
    return 0;
}