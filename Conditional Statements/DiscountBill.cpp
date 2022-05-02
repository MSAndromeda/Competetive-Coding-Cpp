#include <bits/stdc++.h>

using namespace std;

typedef float Bill;

class DiscountBill
{
private:
    Bill TAmt,DAmt=0;
public:
    DiscountBill();
    void CalculateandDisp();
};

DiscountBill::DiscountBill()
{
    cout << "Enter Bill Amount : ";
    cin >> TAmt;
    if(TAmt >= 100 && TAmt < 500) DAmt = TAmt/10;
    else if(TAmt >= 500) DAmt = TAmt/5;
    else /* Invalid Input*/;
}

void DiscountBill::CalculateandDisp(){
    cout<< "Bill Amount = " << TAmt << endl
        << "Discount = " << DAmt << endl
        << "Discounted Amount = " << (TAmt - DAmt);
}

int main(){
    DiscountBill obj1;
    obj1.CalculateandDisp();

    return 0;
}