#include<iostream>
#include<unordered_map>

using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k) {
	
		unordered_map<int,int>occuranceMap;
		
		int count=0;
		for(int i=0;i<n;i++){
			int complement=arr[i]+k;
			count=count+occuranceMap[complement];
			
			if(k!=0){
				complement=arr[i]-k;
				count=count+occuranceMap[complement];
			}
			++occuranceMap[arr[i]];
		}

		return count;
	}

int main(){
	int n,k;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
	cout<<getPairsWithDifferenceK(arr, n,k);
	
	delete [] arr;
}
