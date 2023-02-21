#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {

	//base case
	if(size==0){
		return 0;
	}
	
	//Recursive Call	
	int ans=allIndexes(input,size-1,x,output);
	
	//Small Calculation
	for(int i=0;i<size-1;i++){
		input[i]+=1;
	}
	
	if(input[0]==x){
		for(int i=1;i<=size;i++){
			input[i+1]=input[i];
		}
		input[0]=0;
	}

}

int main(){
	int input[50],output[50],size,x;
	cout<<"Enter Size : ";
	cin>>size;
	cout<<"Enter Values into Array : ";
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	cout<<"Enter Number : ";
	cin>>x;
	int output_size=allIndexes(input,size,x,output);
	
	for(int i=0;i<output_size;i++){
		cout<<output[i]<<" ";
	}
}
