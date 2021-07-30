#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& arr, int l, int r, int Target){
	if(l<=r){
	int mid = l+ (r-l)/2;
		if(Target==arr[mid])
			return mid;
		else if (Target > arr[mid])
			return BinarySearch(arr, mid+1, r, Target);
		else 
			return BinarySearch(arr, l, mid-1, Target);
	}
	else
		return -1;
}

int main(){

	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int Target = 8;
	vector<int>arr(array,array+10);
	int len = arr.size();
	int found = -1;
	found = BinarySearch(arr,0, len-1, Target);
	if(found != -1)
		cout<<"Element "<<Target<<" found at location "<<found<<endl; 

}
