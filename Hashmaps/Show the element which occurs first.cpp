#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
	
	unordered_map<int,int> ourmap;
	
	int arr[]={-1,2,3,7,14,8,4,3,7};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		ourmap[arr[i]]=ourmap[arr[i]]+1;
		
		if(ourmap[arr[i]]>1){
			cout<<arr[i]<<endl;
			break;
		}
	}
}
