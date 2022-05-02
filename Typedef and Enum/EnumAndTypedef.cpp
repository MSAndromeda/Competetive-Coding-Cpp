#include <bits/stdc++.h>

using namespace std;

enum day {mon,tue,wed,thu,fri,sat,sun};

typedef int Marks;

int EnumEx(){
    day d;
    // cannot assign any numeric value to enum
    d=mon;
    // Although it will display numeric value
    cout << d << endl;

    // still code will be displayed for friday i.e. 4
    cout << fri << endl;
    // Note : We cannot increment the value of enum like mon++ as these values are constants.
    return 0;
}

int TypedefEx(){
    // Makes program more readable and easy to understand if the project is too long.
    Marks m1,m2;
    m1 = 50;
    m2 = 70;
}