#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
	
	if(size==0){
		return -1;
	}
	
	if(input[0]==x){
		return 0;
	}
	
	int index=firstIndex(input+1,size-1,x);
	if(index==-1){
		return -1;
	}
	else{
	return index+1;
	}
	 
}
int main(){
	int x,input[50],size;
	cout<<"Enter Size : ";
	cin>>size;
	cout<<"Enter Array : ";
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	cout<<"Enter Number : ";
	cin>>x;
	
	cout<<firstIndex(input,size,x);
}
