#include<iostream>
#include<unordered_map>

using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {

		unordered_map<int,int> freq;
		
		for(int i=0;i<n;i++){
			++freq[arr1[i]];
			
		}
		
		for(int i=0;i<m;i++){
			if(freq.find(arr2[i])!=freq.end()){
				cout<<arr2[i]<<endl;
			}
			
			if(freq[arr2[i]]>1){
				--freq[arr2[i]];
			}
			
			else{
				freq.erase(arr2[i]);
			}
		}
		
	
		
		
}

int main(){
	
	int arr1[]={2 ,6 ,8 ,5,4,3};
	int arr2[]={2 ,3 ,4 ,7};
	printIntersection(arr1, arr2, 6, 4);
	
}
