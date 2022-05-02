#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)     cin >> arr[i];
    
    int maxindex = 0, minindex = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[minindex] >= arr[i])     minindex = i;
        if(arr[maxindex] < arr[i])     maxindex = i;
    }
    
    cout << maxindex + (n-1-minindex) - (maxindex > minindex? 1:0 ) << endl;
    return 0;
}