

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {

	unordered_map<int,bool>ourMap;
	unordered_map<int,bool>::iterator it=ourMap.begin();
	int length,current,maxLength=0,start;
	for(int i=0;i<n;i++){
		ourMap[arr[i]]=true;
	}
	
	for(int i=0;i<ourMap.size();i++){
		current=it->key;
		
	}
	
}

int main(){
	int n;
	cin>>n;
	int *arr=new int [n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	vector <int> longestCommonSeq=longestConsecutiveIncreasingSequence(arr,n);
	for(int i=0;i<longestCommonSeq.length();i++){
		cout<<longestCommonSeq[i]<<" ";
	}
	return 0;
}
