#include<iostream>
#include<cstring>
using namespace std;

int sizeofArray(char input[]){
	
	int i=0,size=0;
	while(input[i]!='\0'){
		size++;
		i++;
	}
	return size;
}

bool palindrome(char input[],int start,int end){
	
if(input[0]=='\0' || input[1]=='\0'){
	return true;
}

if(start>=end){
	return true;
}

if(input[start]==input[end]){
	return palindrome(input,start+1,end-1);
}
else{
	return false;
}
}


bool checkPalindrome(char input[]){
	
	int size=sizeofArray(input);
	return palindrome(input,0,size-1);
}

int main(){
 	
	 char input[50];
	 cin>>input;
//	 cout<<checkPalindrome(input)<<endl;

	if(checkPalindrome(input)){
		cout<<"true";
	} 
	else{
		cout<<"false";
	}
}
