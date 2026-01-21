#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class CString{
    private:
        char *str;
        int length;
    public:

CString(){
    this->str = nullptr;
    this->length = 0;
}
CString(const char *s){
    this->length = strlen(s);
    this->str = new char[this->length + 1];
    strcpy(this->str, s);
}
CString(int len, char ch)
{
    this->length = len;
    this->str = new char[this->length + 1];
    for(int i = 0; i < this->length; i++){
        this->str[i] = ch;
    }
    this->str[this->length] = '\0';
}
~CString(){
    if (this->str != nullptr){
        delete[] this->str;
    }
}
CString(const CString &other) {
    this->length = other.length;
    this->str = new char[this->length + 1];
    strcpy(this->str, other.str);   
}
void AcceptString(){
    char buffer[100];
    cout << "Enter a string: ";
    cin >> buffer;
    this->length = strlen(buffer);
    this->str = new char[this->length + 1];
    strcpy(this->str, buffer);
}
void DisplayString() const{
    if(this->str != nullptr){
        cout << "String: " << this->str << endl;
    } else {
        cout << "String is empty." << endl;
    }
}
};

int main(){
    CString str1; // Default constructor
    str1.DisplayString();

    CString str2("Hello, World!"); // Parameterized constructor
    str2.DisplayString();

    CString str3(5, '*'); // Parameterized constructor with length and character
    str3.DisplayString();

    CString str4 = str2; // Copy constructor
    str4.DisplayString();

    CString str5;
    str5.AcceptString(); // Accept string from user
    str5.DisplayString();

    return 0;
}
