#include <bits/stdc++.h>

using namespace std;

class LeapYear
{
private:
    int y;
public:
    LeapYear();
    void Logic();
};

LeapYear::LeapYear()
{
    cout << "Enter The Year : ";
    cin >> y;
}

void LeapYear::Logic(){
    if(y%4 == 0 && y%100 != 0) cout << "Given Year is a Leap Year";
    else if(y%400 == 0 && y%100 == 0) cout << "Given Year is a Leap Year";
    else cout << "Given Year is not a Leap Year";
}

int main(){
    LeapYear obj1;

    obj1.Logic();

    return 0;
}