#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

string uniqueChar(string str) {
	unordered_map<char,int> ourMap;
	string str1;
	int k=0;
	for(int i=0;i<str.length();i++){
		ourMap[str[i]]+=1;
		if(ourMap[str[i]]<=1){
			str1.push_back(str[i]);
		}
	}
	
return str1;
}

int main(){
	string str;
	cout<<"Enter String : ";
	cin>>str;
	string str1=uniqueChar(str);
	cout<<str1<<" ";
//	cout<<uniqueChar(str)<<" ";
}
