#include<iostream>
using namespace std;

int main()
{
	int matrix[256][256];
	int cs=0,rs=0;
	int ce=255,re=255;
	int k=0;
	while(cs<=ce&&rs<=re){
		
		for(int i=cs;i<=ce;i++){
			matrix[rs][i]=k;
			k++;
		}
		rs++;
		
		for(int i=rs;i<=re;i++){
			matrix[i][ce]=k;
			k++;
		}
		ce--;
		
		if(re>=rs)
		for(int i=ce;i>=cs;i--){
			matrix[re][i]=k;
			k++;
		}
		re--;
		
		if(ce>=cs)
		for(int i=re;i>=rs;i--){
			matrix[i][cs]=k;
			k++;
		}
		cs++;
}

//for(int i=0;i<8;i++){
//	for(int j=0;j<8;j++){
//		cout<<matrix[i][j]<<" ";
//	}
//	cout<<endl;
//}


int row =0,col=0;
cout<<"Enter Row number:"<<endl;
cin>>row;
if(row>255)
	cout<<endl<<"Error: row is out of bound";

cout<<"Enter Column number:"<<endl;
cin>>col;
if(col>255)
	cout<<endl<<"Error: column is out of bound";

cout<<endl<<"Number at position ("<<row<<","<<col<<") is "<<matrix[row][col]<<endl;

}
