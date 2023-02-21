#include<iostream>
using namespace std;

int main(){
	
	int t,x,taxes;
	cin>>t;
	while(t>0){
		cin>>x;
		if(x<=100){
			cout<<x<<endl;
		}
		else{
		taxes=(x/100)*10;
		cout<<x-taxes<<endl;
	}
		t--;
	}
}
