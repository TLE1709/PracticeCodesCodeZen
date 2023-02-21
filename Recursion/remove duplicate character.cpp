#include<iostream>
using namespace std;

int length(char input[]){
	
	int i=0;
	while(input[i]!='\0'){
		i++;
	}
	return i;
}

void removeConsecutiveDuplicates(char *input) {

	int size=length(input);
	
	//base case
	if(size==0 || size==1){
		return;
	}
	
	//recursive call
	if(input[0]!=input[1]){
		removeConsecutiveDuplicates(input+1);
	}
	
	//small calculation
	if(input[0]==input[1]){
		int i=1;
		for(;i<=size-1;i++){
			input[i-1]=input[i];
		}
		input[i-1]='\0';
		removeConsecutiveDuplicates(input);
	}
}

int main(){
	char input[50];
	cin>>input;
	removeConsecutiveDuplicates(input);
	cout<<input<<endl;
}
