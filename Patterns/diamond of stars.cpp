#include<iostream>
using namespace std;

void diamondOfStars(int n){
	
	int n1=(n+1)/2;
	int n2=n-n1;
	
//Upper Half
	for(int j=0;j<n1;j++){
	
	for(int i=1;i<n1-i+1;i++){
		cout<<' ';
	}
	
	for(int i=0;i<2*j+1;i++){
		cout<<'*';
	}
	cout<<endl;
}
//Lower Half
	for(int i=n2;i>0;i--){
		
		for(int k=1;k<n2-k+1;k++){
			cout<<' ';
		}
		for(int j=0;j<2*i-1;j++){
			cout<<'*';
		}
	} 
cout<<endl;
}


int main(){
	cout<<"Enter n : ";
	int n;
	cin>>n;
	cout<<"Pattern : "<<endl;
	diamondOfStars(n);
}
