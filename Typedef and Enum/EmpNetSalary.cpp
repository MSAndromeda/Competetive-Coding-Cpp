#include <bits/stdc++.h>

using namespace std;

typedef float EmpSalary;

class EmpNetSalary
{
private:
    EmpSalary basic, pAllow, pDeduct, netSal;
public:
    EmpNetSalary();
    void Calculate();
    void Display();
};

EmpNetSalary::EmpNetSalary()
{
    cout << "Enter Basic Salary : ";
    cin >> basic;
    cout << "Enter Percentage of Allowences : ";
    cin >> pAllow;
    cout << "Enter Percentage of Deductions : ";
    cin >> pDeduct;
}

void EmpNetSalary::Calculate(){
    netSal = basic + (basic*pAllow/100) - (basic*pDeduct/100);
}

void EmpNetSalary::Display(){
    cout << "Net Salary is : " << netSal << endl;
}

int main(){
    EmpNetSalary obj1;
    obj1.Calculate();
    obj1.Display();
    return 0;
}