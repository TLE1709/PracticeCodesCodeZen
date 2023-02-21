//Dutch National Flag Algorithm

#include<iostream>
using namespace std;

void sort012(int *arr,int n){
	int low=0,high=n-1,mid=0,temp;
	while(mid<=high){
	switch(arr[mid]){
		case 0:
			 temp=arr[low];
			arr[low]=arr[mid];
			arr[mid]=temp;
			low++;
			mid++;
			break;
			
		case 1:
			mid++;
			break;
		
		case 2:
			temp=arr[mid];
			arr[mid]=arr[high];
			arr[high]=temp;
			high--;
			break;
	}
}cout<<endl;
cout<<"The Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

}

int main(){
	int n;
	cout<<"Enter Size of Array : ";
	cin>>n;
	int arr[n];
	cout<<endl;
	cout<<"Enter Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	sort012(arr,n);	
}
