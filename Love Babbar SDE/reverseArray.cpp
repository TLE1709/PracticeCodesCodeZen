#include<iostream>
using namespace std;


void reverseArray(int *arr,int n,int m){
	int start=m+1;
	int end=n-1; 
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}cout<<endl;
	cout<<"Updated Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}

int main(){
	int n,m;
	cout<<"Enter Size of Array : ";
	cin>>n;
	int arr[n];
	cout<<endl;
	cout<<"Enter Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Enter M : ";
	cin>>m;
	reverseArray(arr,n,m);
}
