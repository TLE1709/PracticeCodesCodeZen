#include<iostream>
using namespace std;

int countZeroes(int n){
	
	if(n<=9 && n>=0){
		if(n==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	int ans=countZeroes(n/10);
	int last=n%10;
	
	if(last==0){
		return ans+1;
	}
	else{
	return ans;
	}
}

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<countZeroes(n)<<endl;
}
