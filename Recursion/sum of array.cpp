#include<iostream>
using namespace std;

int sumofArray(int *a,int size){
	if(size==0){
		return 0;
	}
	int count=0;
	count=a[0]+sumofArray(a+1,size-1);
	return count;
}
int main(){
	int a[100],size;
	cout<<"Enter Size : ";
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<sumofArray(a,size);
}
