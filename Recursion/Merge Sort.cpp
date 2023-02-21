#include<iostream>
using namespace std;

void merge(int input[],int si, int ei){
	
	int size=ei-si+1;
	int count=0;
	int i=si;
	int mid=((si+ei)/2);
	int *out=new int[size];
	int j=mid+1;
	
	while(i<mid+1 && j<=ei){
		if(input[i]<=input[j]){
			out[count]=input[i];
			i++;
			count++;
		}
		else{
			 out[count]=input[j];
			j++;
			count++;
		}
	}
	
	//bache hue elements ke liye
	while(i<=mid){
		out[count]=input[i];
		i++;
		count++;
	}
	
	while(j<=ei){
		out[count]=input[j];
		j++;
		count++;
	}
	
	int m=0;
		for(int i=si;i<=ei;i++){
			input[i]=out[m];
			m++;
		}
		delete [] out;	
}

void mergeSort(int input[], int si,int ei){

//Base Case
if(si>=ei){
	return ;
}   

//Recursive Call
int mid=(si+ei)/2;
mergeSort(input,si,mid);
mergeSort(input,mid+1,ei);
merge(input,si,ei);

}

void mergeSort(int input[], int size){
	
    mergeSort(input,0,size-1);    
}

int main(){
	int input[50],size;
	cout<<"Enter Number of Elements : ";
	cin>>size;
	cout<<"Enter Elements into Array : ";
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	mergeSort(input,size);
	for(int i=0;i<size;i++){
		cout<<input[i]<<" ";
	}
}

