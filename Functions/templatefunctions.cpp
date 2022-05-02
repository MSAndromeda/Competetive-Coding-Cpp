#include <bits/stdc++.h>

using namespace std;

template<class T>
T Maxim(T a, T b){
    return (a>b)?a:b;
}


int main(){
    cout << Maxim(1,7) << endl;
    cout << Maxim(1.45,2.3) << endl;
    cout << Maxim(1.34f,3.45f) << endl;
    return 0;
}