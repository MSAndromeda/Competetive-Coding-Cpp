#include <bits/stdc++.h>

using namespace std;

typedef int Matrix_Dimention;
#define MAX 100

class Matrix
{
private:
    Matrix_Dimention m1, n1, m2, n2;
    int A[MAX][MAX];
    int B[MAX][MAX];
    int Sum=0;
public:
    Matrix();
    void ADDSUBinput();
    void Addition();
    void Subtraction();
    void MulInput();
    void Multiplication();
};

Matrix::Matrix()
{
    cout << "Enter The Row and Column of :" << endl;
    cout << "First Matrix : ";
    cin >> m1 >> n1;
    cout << "Second Matrix : ";
    cin >> m2 >> n2;
}

void Matrix::ADDSUBinput(){
    cout << "Enter First Matrix Elements : ";
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n1; j++)
            cin >> A[i][j];

    cout << "Enter Second Matrix Elements : ";
    for (int i = 0; i < m2; i++)
        for (int j = 0; j < n2; j++)
            cin >> B[i][j];

}

void Matrix::Addition(){
    cout << "\nAddition :" << endl;
    if(n1 == n2 && m1 == m2)
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
                cout << (A[i][j] + B[i][j]) << " ";
            cout << endl;
        }
        
    }
}

void Matrix::Subtraction(){
    cout << "\nSubtraction :" << endl;
    if(n1 == n2 && m1 == m2)
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
                cout << (A[i][j] - B[i][j]) << " ";
            cout << endl;
        }
        
    }
}

void Matrix::MulInput(){
    while(n1 != m2){
    cout << "Column of The First Matrix not equal to Row of Second :" << endl;
    cout << "First Matrix : ";
    cin >> m1 >> n1;
    cout << "Second Matrix : ";
    cin >> m2 >> n2;
    }
}

void Matrix::Multiplication(){
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n1; k++)
            {
                Sum += A[i][k]*B[k][j];
            }
            cout << Sum << " ";
            Sum = 0;
        }
        cout << endl;
    }
}

int main(){
    Matrix obj1;
    // obj1.Subtraction();
    // obj1.Addition();
    obj1.MulInput();
    obj1.ADDSUBinput();
    obj1.Multiplication();
    return 0;
}