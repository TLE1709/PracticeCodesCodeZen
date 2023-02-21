#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>

using namespace std;

int main(){
	
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	vector<int>::iterator it1=v.begin();
	while(it1!=v.end()){
		cout<<*it1<<endl;
		it1++;
	}
}
