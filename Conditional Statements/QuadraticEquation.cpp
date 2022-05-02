#include <bits/stdc++.h>

using namespace std;

typedef float Eq_Coeff;

class QuadraticEquation
{
private:
    Eq_Coeff a,b,c,d;
public:
    QuadraticEquation();
    void Calculate();
    void Display();
};

QuadraticEquation::QuadraticEquation()
{
    cout << "Enter Coefficient Of x Square : ";
    cin >> a;
    cout << "Enter Coefficient Of x : ";
    cin >> b;
    cout << "Enter Coefficient of Constant : ";
    cin >> c;
}

void QuadraticEquation::Calculate(){
    d = (b*b) - (4*a*c);
}

void QuadraticEquation::Display(){
    if(d==0){
        cout << "Roots are Real and Equal" << endl;
        cout << (-b/(2*a));
    }
    else if(d>0){
        cout << "Roots are Real and Distinct" << endl;
        cout << (( -b + sqrt(d) ) / ( 2 * a )) << endl;
        cout << (( -b - sqrt(d) ) / ( 2 * a )) << endl;
    }
    else
        cout << "Roots are Imaginary" << endl;
}

int main(){
    QuadraticEquation obj1;
    obj1.Calculate();
    obj1.Display();
    return 0;
}