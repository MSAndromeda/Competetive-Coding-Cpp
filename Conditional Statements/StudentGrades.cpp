#include <bits/stdc++.h>

using namespace std;

typedef int Marks;

class StudentGrades
{
private:
    Marks m1, m2, m3, TOtal=0;
    float Avg;
public:
    StudentGrades();
    void Average();
    void Grade();
};

StudentGrades::StudentGrades(){
    cout << "Enter Marks of Three Subjects : ";
    cin >> m1 >> m2 >> m3;
}

void StudentGrades::Average(){
    TOtal = m1+m2+m3;
    Avg = TOtal/3.0;
}

void StudentGrades::Grade(){
    if(Avg >= 60) cout << "Grade A Holder" << endl;
    else if(Avg >= 35 && Avg < 60) cout << "Grade B Holder" << endl;
    else cout << "Grade C Holder" << endl;
}

int main(){
    StudentGrades obj1;
    obj1.Average();
    obj1.Grade();

    return 0;
}