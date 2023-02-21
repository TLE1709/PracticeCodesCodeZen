#include<iostream>
using namespace std;

//function to calculate length of string
int length(char input[]){
	int i=0;
	while(input[i]!='\0'){
		i++;
	}
	return i;
}

void replacePi(char input[],int start) {

//base_case
if(input[start]=='\0' || input[start+1]=='\0'){
	return;
}

//recursive call
replacePi(input,start+1);
	
//calculation	
if(input[start]=='p' &&input[start+1]=='i'){
	int size=length(input);
	input[size+2]='\0';
	for(int i=size-1;i>=start+2;i++){
		input[i+2]=input[i];
	}
	input[start]='3';
	input[start+1]='.';
	input[start+2]='1';
	input[start+3]='4';
}
}

void replacePi(char input[]) {
	replacePi(input,0);
}

int main(){
	char input[50];
	cout<<"Enter String : ";
	cin>>input;
	replacePi(input);
	cout<<input<<endl;
}

