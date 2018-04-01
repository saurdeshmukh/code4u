#include<iostream>

using namespace std;


class base{

int x;
public:
base()
{
x=0;
}
};

class derived:public base{

public:
derived(){
}

};

int main()
{
base *b=new derived();



}
