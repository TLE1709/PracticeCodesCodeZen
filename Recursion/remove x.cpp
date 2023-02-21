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

void removeX(char input[]) {
//base case
if(input[0]=='\0'){
	return;
}
int size=length(input);
//recursive call
if(input[0]!='x'){
	removeX(input+1);
}

if(input[0]=='x'){
	int i=1;
	for(;i<size;i++){
		input[i-1]=input[i];
	}
	input[i-1]=input[i];
	removeX(input);
}
}

int main(){
	char input[50];
	cout<<"Enter String : ";
	cin>>input;
	removeX(input);
	cout<<input<<endl;
}
