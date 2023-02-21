//not working
#include<iostream>
#include<vector>
#include<unordered_map>

vector<int> removeDuplicates(int *a,int size){
	
	unordered_map<int,bool>seen;
	vector<int>output;
	
	for(int i=0;i<size;i++){
		if(seen.count[a[i]]>true){
			continue;
		}
		output.pushback(a[i]);
		seen[a[i]]=true;
	}
	
	return output;
}

int main(){
	
	int a[]={1,2,3,4,2,3,1,2,3,4,5,6,6,7,8,8,7,7,2};
	
	vector<int> output=removeDuplicates(a,11);
	
	for(int i=0;i<output.size();i++){
		cout<<output[i]<<" ";
	}
}
