#include <bits/stdc++.h>

using namespace std;

void BinarySearch(int l, int h, int Arr[], int key){
    while(l <= h)
    {
    int mid = floor((l+h)/2);
        if(key = Arr[mid])
        {
            cout << "Element Found at : " << mid << endl;
            return;
        }
        else if(key < Arr[mid]) h = mid - 1;
        else l = mid + 1;
    }
    cout << "Search Unsuccessful." << endl;
}