#include<iostream>
#include<vector>
using namespace std;

class Matrix2D
{

	size_t height;
	size_t width;
	vector < vector <int> > ptr;
public:
	Matrix2D()
	{
		cout<<"Creating Object"<<endl;
		this->height = 0;
		this->width = 0;
	}
	Matrix2D(int h, int w)
	{
	
		this->height = h;
		this->width = w;
		for(int i=0;i<this->height;i++){
			vector<int> temp;
			for(int j=0;j<this->width;j++){
				temp.push_back(0);
			}
			this->ptr.push_back(temp);
		}
		
	}
	void display(){
		for(int i;i<this->height;i++){
			for(int j=0;j<this->width;j++){
				cout<<this->ptr[i][j]<<" ";
			}
		cout<<"\n";
		}
	}
};

int main()
{
	Matrix2D a(3,3);
	Matrix2D b(3,3);
	a.display();
	b.display();


return 0;
}
