#include<iostream>
using namespace std;

int Multiply(int a, int b, int c=1, int d=1);

int Multiply(int a, int b, int c, int d) {
    return a * b * c * d;
}

int main()
{
    int num1, num2, num3, num4;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Product of " << num1 << " and " << num2 << " is: " << Multiply(num1, num2) << endl;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Product of " << num1 << ", " << num2 << ", and " << num3 << " is: " << Multiply(num1, num2, num3) << endl;

    cout << "Enter four integers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "Product of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << Multiply(num1, num2, num3, num4) << endl;

    return 0;
}