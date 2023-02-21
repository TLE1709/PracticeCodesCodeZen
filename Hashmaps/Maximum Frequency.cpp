#include<iostream>
#include<unordered_map>
#include<climits>

using namespace std;

int highestFrequency(int a[], int n) {
    unordered_map<int,int> numberFrequency;

    
    for(int i=0;i<n;i++){
    	numberFrequency[a[i]]=numberFrequency[a[i]]+1;
    	//cout<<a[i]<<"      "<<numberFrequency[a[i]]<<endl;
	}
	
	int max=-100;
	int number;
	
	for(int i=0;i<n;i++){
		if (numberFrequency[a[i]]>max){
			number=a[i];
			max=numberFrequency[a[i]];
		}
	}
	
	return number;
	
}

int main(){
		
		int arr[]={2,7,1,1,11,8};
		int number=highestFrequency(arr,6);
		cout<<number<<" ";
}
