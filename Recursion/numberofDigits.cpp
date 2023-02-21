#include<iostream>
using namespace std;

int numberofDigits(int n){
	
	if(n==0){
		return 0;
	}
	int smalloutput=numberofDigits(n/10);
	return smalloutput+1;
}

int main(){
	int n;
	cin>>n;
	cout<<numberofDigits(n);
	return 0;
}
