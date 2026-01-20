#include<iostream>
using namespace std;

inline float  areaCircle(const float PI, int radius) {
    return PI * radius * radius;
}

int main()
{
    const float  PI = 3.14;
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << areaCircle(PI, radius) << endl;
    return 0;
}