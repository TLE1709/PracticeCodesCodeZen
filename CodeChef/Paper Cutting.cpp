#include<iostream>
using namespace std;

int main(){
	int n,k,t;
	cin>>t;
	while(t>0){
		cin>>n>>k;
		int number_of_cutout=(n*n)/(k*k);
		cout<<number_of_cutout<<endl;
		t--;
	}
}
