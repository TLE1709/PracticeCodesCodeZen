//Pair sum to 0

#include<iostream>
#include<unordered_map>

using namespace std;

int pairSum(int *arr, int n) {
	int count=0;
	unordered_map<int,int>freq;
	
	for(int i=0;i<n;i++){
		
		int complement=-arr[i];
		
		if(freq.find(complement)!=freq.end()){
			count+=freq[complement];
		}
		
		++freq[arr[i]];
	}

return count;

}

int main(){
	int arr[]={0,0,0,0,0};
	cout<<pairSum(arr,5)<<endl;
}
