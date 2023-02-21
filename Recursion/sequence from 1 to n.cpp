#include<iostream>
using namespace std;

void printSequence(int n){
	
	if(n==1){
		cout<<1<<" ";
		return;
	}
	printSequence(n-1);
	cout<<n<<" ";
}

int main(){
	int n;
	cin>>n;
	printSequence(n);
	return 0;
}
