#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int spaces=1;
		while(spaces<=n-i){
			cout<<" ";
			spaces++;
		}
		
		int num=i;
		while(num<i+i){
			cout<<num;
			num++;
		}
		
		int j=2*(i-1);
		while(j>=i){
			cout<<j;
			j--;
		}
		cout<<endl;
		i++;
	}
}
