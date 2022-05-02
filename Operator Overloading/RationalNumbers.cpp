#include <bits/stdc++.h>

using namespace std;

class RationalNumbers
{
private:
    int p, q;
public:
    RationalNumbers(int,int);
    RationalNumbers(RationalNumbers &r);
    RationalNumbers operator+(RationalNumbers &a);
    friend ostream& operator<<(ostream &os, RationalNumbers &r);
};

RationalNumbers::RationalNumbers(int p = 1, int q = 1)
{
    this->p = p;    this->q = q;
}

RationalNumbers::RationalNumbers(RationalNumbers &r){
    this->p = r.p;      this->q = r.q;
}

RationalNumbers RationalNumbers::operator+(RationalNumbers &a){
    RationalNumbers temp;
    temp.p = this->p*a.q + this->q*a.p;
    temp.q = this->q*a.q;
    return temp;
}

ostream& operator<<(ostream &os, RationalNumbers &r){
    os << r.p << "/" << r.q;
    return os;
}

int main(){
    RationalNumbers r1(3,4), r2(2,5), r3;
    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2  << " is : "<< r3 << endl;
    return 0;
}