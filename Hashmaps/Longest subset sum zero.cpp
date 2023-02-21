#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    
    int length=0;
    int maxlength=0;
    int sum=0;
    int finalIndex=0;
    int initialIndex=0;
    unordered_map<int,int> ourMap;
    int k=0;
    while(k<n){
    	sum+=arr[k];
    	if(){

		}
		else{

		}
	}
return maxlength;	
}

int main(){	
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<lengthOfLongestSubsetWithZeroSum(arr,n);
}
