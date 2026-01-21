#include<iostream>
using namespace std;

class CComplex
{
    private:
        int real;
        int imag;
    public:
    static int objCount;
        CComplex()
        {
            real = 0;
            imag = 0;   
            objCount++;
        }
        CComplex(int r, int i)
        {
            real = r;
            imag = i;
            objCount++;
        }
        int GetReal() const  
        {
            return this->real;
        }
        int GetImaginary() const  
        {
            return this->imag;
        }
        void SetReal(int r)  
        {
            this->real = r;
        }
        void SetImaginary(int i)  
        {
            this->imag = i;
        }
        void Display() const
        {
            cout << this->real << " + " << this->imag << "i" << endl;
        }
        static int GetCount()
        {
            return objCount;
        }
        CComplex add(const CComplex &c) const
        {
            return CComplex(this->real + c.real, this->imag + c.imag);
        }
};

// Initialize static member variable to zero
int CComplex::objCount = 0;

int main()
{
    // Create constant complex object and invoke constant member function
    const CComplex c1(3, 4);
    cout << "Constant Complex Number: ";
    c1.Display();
    cout << "Real Part: " << c1.GetReal() << endl;
    cout << "Imaginary Part: " << c1.GetImaginary() << endl;
    cout << "Total Complex Objects Created: " << CComplex::GetCount() << endl;

    CComplex c2(5, 6);
    CComplex c3 = c1.add(c2);
    cout << "After Addition: ";
    c3.Display();
    cout << "Total Complex Objects Created: " << CComplex::GetCount() << endl;
    return 0;
}