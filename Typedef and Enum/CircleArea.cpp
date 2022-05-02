#include <bits/stdc++.h>

using namespace std;

typedef float Circle;
#define PI 3.1425

class CircleArea
{
private:
    Circle rad,area;
public:
    CircleArea();
    void FindCircleArea();
    void Display();
};

CircleArea::CircleArea()
{
    cout << "Enter the Radius of Circle : ";
    cin >> rad;
}

void CircleArea::FindCircleArea(){
    area = PI*rad*rad;
}

void CircleArea::Display(){
    cout << "Area of Circle : " << area << endl;
}

int main(){
    CircleArea obj1;
    obj1.FindCircleArea();
    obj1.Display();
    return 0;
}