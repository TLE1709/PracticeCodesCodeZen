#include<iostream>
using namespace std;

int sumofDigits(int n){
	
	if(n==0){
		return 0;
	}
	
	int sum=sumofDigits(n/10);
	
	int last=n%10;
	
	return sum+last;
}

int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<sumofDigits(n)<<endl;
}
