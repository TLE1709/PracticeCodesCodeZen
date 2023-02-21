#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {

		unordered_map<int,bool> isvisitedMap;
		unordered_map<int,int> indexingMap;
		
		for(int i=0;i<n;i++){
			
			indexingMap[arr[i]]=i;
			
			if(isvisitedMap.count(arr[i])==0){
			isvisitedMap[arr[i]]=false;}
		}	
		
		int maxLength=1;
		int length=0;
		
		int globalminIndex=0;
		int num;
		
		
		for(int i=0;i<n;i++){
		
		num=arr[i];
		int currentminIndex=i;
		int tempnum=num;
	`	//forward
		while(isvisitedMap[tempnum]==false &&isvisitedMap.count(tempnum)==1){
			isvisitedMap[tempnum]=true;
			length++;
			tempnum++;
		}
		
		//backward
		while(isvisitedMap[tempnum]==false && isvisitedMap.count(tempnum)){
			isvisitedMap[tempnum]=true;
			length++;
			currentminIndex=indexingMap[tempnum];
			tempnum=tempnum-1;
		}
		
		if(length>maxLength)
		{
			maxLength=length;
			globalminIndex=currentminIndex;
		}
		
		else if(length==maxLength){
			if(currentminIndex<globalminIndex){
				globalminIndex=currentminIndex;
			}
		}
	}
	int num=arr[globalminIndex];
	vector<int>v;
	v.push_back(num);
	if(maxLength>1){
		v.push_back(num+maxLength-1);
	}
	
	return v;
}

int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	vector<int>v=longestConsecutiveIncreasingSequence(arr, n);
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

	
	
	
	delete [] arr;
}

