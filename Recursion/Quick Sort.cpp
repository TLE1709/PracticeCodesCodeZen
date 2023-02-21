//Incomplete

#include<iostream>
using namespace std;

int partition(int input[],int si,int ei){
	
	int i=si;
	int j=ei;
	int pivot=input[si];
	int count_smallerNumbers=0;
	for(int i=si;i<=ei;i++){
		if(input[i]<pivot){
			count_smallerNumbers++;
		}
	}
	
	int pivotIndex=count_smallerNumbers+si;
	
	int swap=input[si];
	input[si]=input[pivotIndex];
	input[pivotIndex]=swap;
	
	while(i<=pivotIndex && j>=pivotIndex){
		if(input[i]<=input[pivotIndex]){
			i++;
		}
		else if(input[j]>input[pivotIndex]){
			j--;
		}
		else{
			int temp=input[i];
			input[i]=input[j];
			input[j]=temp;
			i++;
			j--;
		}
	}
	return pivotIndex;
}

void quickSort(int input[],int si,int ei){
 	if(si>=ei){
  	return ;
  }
  
  int p=partition(input,si,ei);
  quickSort(input,si,p-1);
  quickSort(input,p+1,ei);
}
void quickSort(int input[], int size) {
  
quickSort(input,0,size-1);
}

int main(){
	int size;
	cout<<"Enter Size : ";
	cin>>size;
	int *arr=new int [size];
	cout<<"Enter Elements : ";
	for(int i=0;i<size;i++){
		int get_value;
		cin>>get_value;
		arr[i]=get_value;
	}
	quickSort(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	delete [] arr;
}
