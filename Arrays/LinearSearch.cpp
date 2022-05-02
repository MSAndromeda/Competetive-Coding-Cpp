#include <bits/stdc++.h>

using namespace std;

int main(){
    int A[10], n = 10;

    cout << "Enter the Array Elements :" << endl;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << "Enter Key : ";
    int key;
    cin >> key;
    for(auto x : A){
        if(key == x)
        { 
            cout << "Key Found." << endl;
            return 0;
        }
    }
    cout << "Key Not FOund." << endl;
    return 0;
}