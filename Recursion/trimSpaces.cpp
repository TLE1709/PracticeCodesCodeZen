#include<iostream>
#include<cstring>

using namespace std;

int length(char input[]){
	int i=0;
	while(input[i]!='\0'){
		i++;
	}
	return i;
}

void trimSpaces(char input[]) {
	
	int size=length(input);
	
	//base case
	if(size==0 || size==1){
		return;
	}
	
	//recursive call
	if(input[0]!=' '){
		trimSpaces(input+1);
	}
	
	//base case
	if(input[0]==' '){
		int i=1;
		for(;i<size;i++){
			input[i-1]=input[i];
		}
		input[i-1]=input[i];
		trimSpaces(input);
	}
	
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
