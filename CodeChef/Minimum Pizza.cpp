#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int frnd,slices;
	while(t>0){
		cin>>frnd>>slices;
		if((frnd*slices)%4==0){
			cout<<(frnd*slices)/4<<endl;
		}
		else{
			cout<<((frnd*slices)/4)+1<<endl;
		}
		t--;
	}
}
