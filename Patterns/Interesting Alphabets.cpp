#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=0;
		char start='A'+n-i;
		while(j<i){
			char ch=start+j;
			cout<<ch;
			j++;
		}
		cout<<endl;
		i++;
	}
}
