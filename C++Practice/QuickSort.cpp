#include<iostream>
#include<vector>
using namespace std;




void printArray(vector<int> &arr){
	int len = arr.size();
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void swap(int &a, int&b){
	int temp = a;
	a=b;
	b = temp;
}
int partition(vector<int>&arr, int l, int r){
//consider high position element as pivot
	int pivot = arr[r];

//to keep track on smaller elements than pivot take on pointer 
int i = l-1;

//get all element smaller than pivot on left side of pointer i
for(int j=l;j<=r;j++){
	if(arr[j]<pivot){
		i++;
		swap(arr[i],arr[j]);
	}
}

//now replace i+1the position with pivot as it is it actual position
swap(arr[i+1],arr[r]);
return i+1;
}
void QuickSort(vector<int>& arr, int l, int r){
	if(l<r){
		int pivot = partition(arr,l,r);
		QuickSort(arr, l, pivot-1);
		QuickSort(arr, pivot+1, r);
	}
}

int main(){
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	vector<int>arr(array, array+10);
	printArray(arr);
	int len = arr.size();
	QuickSort(arr, 0, len-1);
	printArray(arr);
}
