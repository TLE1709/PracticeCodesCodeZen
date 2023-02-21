#include<iostream>
using namespace std;

bool checkNumber(int *a,int size,int x){
	if(size==0){
		return false;
	}
	if(a[0]==x){
			return true;
		}
	bool present=checkNumber(a+1,size-1,x);
	return present;
}
int main(){
	int size,a[100],x;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cin>>x;
	if(checkNumber(a,size,x)){
		cout<<"Present";
	}
	else{
		cout<<"Not Present";
	}
}
