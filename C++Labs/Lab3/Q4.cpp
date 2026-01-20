#include<iostream>
using namespace std;

int Add(int a, int b) {
    return a + b;
}

float Add(float a, float b) {
    return a + b;
}   

double Add(double a, double b) {
    return a + b;
}       

int main()
{
    int int1=10, int2=20;
    cout << "Sum of integers: " << Add(int1, int2) << endl;
    cout << "Sum of floats: " << Add((float)int1/2.5, (float)int2/3.5) << endl;
    cout << "Sum of doubles: " << Add((double)int1*16000, (double)int2*16000) << endl;

    return 0;
}

