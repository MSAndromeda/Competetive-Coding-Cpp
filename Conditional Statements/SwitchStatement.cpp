#include <bits/stdc++.h>

using namespace std;

enum day {Mon=1,Tue,Wed,Thu,Fri,Sat,Sun};

int main(){
    day d;
    int n;
    string s;
    cout << "Enter The Day Number : ";
    cin >> n;
    // Typecasting is Needed in Enum When taking Dynamic Input
    d = (day)n;

    switch (d)
    {
    case Mon:
        cout << "Monday" << endl;
        break;
    
    case Tue:
        cout << "Tuesday" << endl;
        break;
    
    case Wed:
        cout << "Wednesday" << endl;
        break;
    
    case Thu:
        cout << "Thursday" << endl;
        break;
    
    case Fri:
        cout << "Friday" << endl;
        break;
    
    case Sat:
        cout << "Saturday" << endl;
        break;
    
    case Sun:
        cout << "Sunday" << endl;
        break;
    
    default:
        cout << "Invalid Input" << endl;
        break;
    }
}