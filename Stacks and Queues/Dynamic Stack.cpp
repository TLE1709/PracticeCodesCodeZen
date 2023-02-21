#include<iostream>
using namespace std;

class Stack{
	int *data;
	int nextIndex;
	int capacity;
	
	public :
		
	Stack(){
		data=new int[5];
		nextIndex=0;
		capacity=5;
	}
	
	void push(int element){
	if(nextIndex==capacity){
		int *newData=new int[2*capacity];
		for(int i=0;i<capacity;i++){
			newData[i]=data[i];
		}
		delete [] data;
		data=newData;
		capacity=capacity*2;
		
	}
	data[nextIndex]=element;
	nextIndex++;
}

void pop(){
	if(isEmpty()){
		cout<<"Stack is Empty"<<endl;
	}
	else{
	
	cout<<"Element Deleted : "<<data[nextIndex]<<endl;
	nextIndex--;
}
}

int top(){
	return data[nextIndex-1];
}

bool isEmpty(){
	if(nextIndex==0){
		return true;
	}
	else{
		return false;
	}
}

};

//push pop top full isempty



int main(){
	Stack s;
	char ch;
	int num;
	cout<<"Element : ";
	cin>>num;
	s.push(num);
	cout<<"Do you want to enter more elements : ";
	cin>>ch;
	while(ch=='y' || ch=='Y'){
		cin>>num;
		s.push(num);
		cout<<"Do you want to enter more elements : ";
		cin>>ch;
	}
	
	cout<<s.isEmpty()<<" "<<endl;
	cout<<s.top()<<" ";
}
