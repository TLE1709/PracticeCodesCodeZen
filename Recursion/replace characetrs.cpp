#include<iostream>
using namespace std;

int length(char input[]){
	
	int i=0;
	while(input[i]!='\0'){
		i++;
	}
	return i;
}
void replaceCharacter(char input[], char c1, char c2) {
    
    int size=length(input);
    if(size==0 || size==1){
    	return;
	}
	if(input[0]==c1){
		input[0]=c2;
	}
	replaceCharacter(input+1,c1,c2);
}

int main(){
	char input[50],c1,c2;
	cout<<"Enter String : ";
	cin>>input;
	cout<<"Enter Character 1 : ";
	cin>>c1;
	cout<<"Enter Character 2 : ";
	cin>>c2;
	replaceCharacter(input,c1,c2);
	cout<<input<<endl;
}
