#include<iostream>
using namespace std;

class Node{
	public:
		
	int data;
	Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
	
};

Node *input(){
	int data;
	Node *head=NULL;
	Node *tail=NULL;
	cin>>data;
	while(data!=-1){
		Node *newNode=new Node(data);
		
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		
		else{
			tail->next=newNode;
			tail=tail->next;
		}
		cin>>data;
		
	}
	return head;
}

void display(Node *head){

	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}	
}

int main(){
	Node *head;
	head=input();
	display(head);
	return 0;
}
