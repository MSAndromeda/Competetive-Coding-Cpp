#include <bits/stdc++.h>

using namespace std;

class LoopsBasic
{
private:
public:
    LoopsBasic();
    void MulTable(int);
    void factorial(int);
    void Factors(int);
    void PerfectNum(int);
    void Prime(int);
    void DigitDisplay(int);
    void ArmstrongNum(int);
    void Reverse(int);
    void Palindrome(int);
    void NumberinWords(int);
    void GCD(int, int);
    ~LoopsBasic();
};

LoopsBasic::LoopsBasic()
{
}

void LoopsBasic::MulTable(int n){
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << (n*i) << endl;
    
}

void LoopsBasic::factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    cout << "Factorial of Number " << n << " is = " << fact << endl;
}

void LoopsBasic::Factors(int n){
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0) cout << i;
        if(i == n) cout << "." <<endl;
        else cout << ", ";
    }
}

void LoopsBasic::PerfectNum(int n){
    int sum = 0;
    for (int i = 1; i < n; i++)
        if(n%i == 0) sum+=i;
    if(sum == n) cout << n << "is a Perfect Number.";
    else cout << n << "is not a Perfect Number.";
}

void LoopsBasic::Prime(int n){
    int c = 0;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i == 0){ c++; break;}
    if(c) cout << "Number is Prime.";
    else cout << "Number is not Prime";
}

void LoopsBasic::DigitDisplay(int n){
    while (n != 0)
    {
        int r = n%10;
        n /= 10;
        cout << r << endl;
    }
}

void LoopsBasic::ArmstrongNum(int n){
    int sum = 0, m = n;
    while (n != 0)
    {
        int r = n % 10;
        sum += pow(r,3);
        n /= 10;
    }
    if(sum == m) cout << "Armstrong Number";
    else cout << "Not a Armstrong Number";
}

void LoopsBasic::Reverse(int n){
    int rev = 0;
    while (n != 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    cout << "Reverse Number = " << rev << endl;
}

void LoopsBasic::Palindrome(int n){
    int rev = 0, m = n;
    while (n != 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    if(rev == m) cout << "Palindrome Number." << endl;
    else cout << "Not Palindrome." << endl;
}

void LoopsBasic::NumberinWords(int n){
    int rev = 0;
    while (n != 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    while (rev)
    {
        int r = rev % 10;
        if(r == 0) cout << " Zero";
        else if(r == 1) cout << " One";
        else if(r == 2) cout << " Two";
        else if(r == 3) cout << " Three";
        else if(r == 4) cout << " Four";
        else if(r == 5) cout << " Five";
        else if(r == 6) cout << " Six";
        else if(r == 7) cout << " Seven";
        else if(r == 8) cout << " Eight";
        else if(r == 9) cout << " Nine";
        else {/*Eroor*/}
        rev /= 10;
    }
}

void LoopsBasic::GCD(int n, int m){
    while (n!=m)
    {
        if(n > m) n -= m;
        else if(m > n) m -= n;
    }
    cout << "GCD is " << n << endl;
}