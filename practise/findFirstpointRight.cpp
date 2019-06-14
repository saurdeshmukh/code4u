
#include<iostream>
#include<math.h>
using namespace std;

int main()
{

float x1=0,x2=0,y1=0,y2=0;
cout<<"\nEnter first Point X1:";
cin>>x1;
cout<<"\nEnter first Point Y1:";
cin>>y1;
cout<<"\nEnter second Point X2:";
cin>>x2;
cout<<"\nEnter second Point Y2:";
cin>>y2;


float slope=(y2-y1)/(x2-x1);
cout<<"slope:"<<slope<<endl;
float m=(-1)/slope;

cout<<m<<endl;

float c=y2-(m*x2);
cout<<c<<endl;

float x=0;
float y=0;

if(slope<0)
{
	x=x2-1;
	y=m*x+c;
	while((ceilf(y)!=y))
	{
		x-=1;
		y=m*x+c;

	}

}
else
{
	x=x2+1;
	y=m*x+c;
        while((ceilf(y)!=y))
        {
                x+=1;
		y=m*x+c;
        }


}

cout<<x<<"  "<<y;

return 0;
}
