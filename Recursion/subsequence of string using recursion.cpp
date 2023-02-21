//Important Program
#include<iostream>
#include<cmath>
using namespace std;

int subSequence(string input,string output[]){
	if(input.empty()){
		output[0]=" ";
		return 1;
	}
	
	string subseq=input.substr(1);
	int sizeofOutput=subSequence(subseq,output);
	
	for(int i=0;i<sizeofOutput;i++){
		output[i+sizeofOutput]=input[0]+output[i];
	}
	
	return sizeofOutput*2;
}
int main(){
	string input;
	cout<<"Enter String : ";
	cin>>input;
	int size=pow(2,input.size());
	string *output=new string[size];
	int count=subSequence(input,output);
	for(int i=0;i<count;i++){
		cout<<output[i]<<endl;
	}
	
	delete [] output;
}
