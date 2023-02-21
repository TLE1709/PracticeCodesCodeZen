#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			count++;
		}
	}
	if(count>0){
		int x=2;
		n+=1;
		arr[n-1]=2;
	}
	else{
		int x=1;
		n+=1;
		arr[n-1]=1;
	}
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	
	cout<<max<<" ";
}
