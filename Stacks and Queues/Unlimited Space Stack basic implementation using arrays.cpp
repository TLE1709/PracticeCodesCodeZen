//Code is not working
#include<iostream>
using namespace std;


class StackusingArray{
	
	int *data;
	int nextIndex;
	int capacity;
	
	public:
		
		StackusingArray(int size){
			data=new int[size];
			capacity=size;
			nextIndex=0;
		}
		
		
		void push(int element){
			if(nextIndex==capacity){
				cout<<"Stack is Full"<<endl;
				return;
			}
			data[nextIndex]=element;
			nextIndex++;
		}
		
		int pop(){
			if(nextIndex==0){
				cout<<"Stack is Empty";
			}else{
				nextIndex--;

			}
			
			return data[nextIndex];	
		}
		
		void top(){
			cout<<"Top of Stack : "<<data[nextIndex-1]<<endl;
		}	
		
		void size(){
			cout<<"Size of Stack : "<<nextIndex<<endl;
		}
		
		void isEmpty(){
			if(nextIndex==0){
				cout<<"Stack is Empty"<<endl;
			}
			else{
				cout<<"Stack is not empty "<<endl;
			}
		}
};

int main(){
	
	StackusingArray s;
	s.isEmpty();
	s.push(5);
	s.push(10);
	s.push(15);
	s.push(20);
	
	s.top();
	
	s.size();
	
	cout<<s.pop()<<endl;
	s.size();
	s.top();
	s.isEmpty();
}
