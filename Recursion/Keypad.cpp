#include<iostream>
using namespace std;

int keypad(int num,int rem, string output[]){
   
   int input[]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   
   if(num==0){
   	output[0]=" ";
   	return 1;
   }
   string s=input[num%10];
   int count=keypad(num/10,)  
   
}
int keypad(int num, string output[]){
   
int input[]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int rem=num%10;
int 

}

int main(){
	int num;
	cout<<"Enter Number : ";
	cin>>num;
//	int size=pow(2,input.size());
	string *output=new string[100000];
	int count=subSequence(input,output);
	for(int i=0;i<count;i++){
		cout<<output[i]<<endl;
	}
	
	delete [] output;
}
