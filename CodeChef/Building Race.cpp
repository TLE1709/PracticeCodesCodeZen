#include <iostream>
using namespace std;

int main(){
	int a,b,x,y;
	int t;
	cin>>t;
	while(t>0){
	cin>>a>>b>>x>>y;
	double time_chef,time_chefina;
	time_chef=(double)(a/x);
	time_chefina=(double)(b/y);
// 	cout<<speed_chef<<" "<<speed_chefina;
	if(time_chef==time_chefina){
		cout<<"Both"<<endl;
	}
	else if(time_chef<time_chefina){
		cout<<"Chef"<<endl;
	}
	else{
		cout<<"Chefina"<<endl;
	}

	t--;
}
}

