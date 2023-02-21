#include<iostream>
using namespace std;

int main(){
	int t,x,y;
	cin>>t;
	while(t>0){
	cin>>x>>y;
	float result=((float)y)/((float)x);
	if(result>=0.5){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	t--;
}
	return 0;
}
