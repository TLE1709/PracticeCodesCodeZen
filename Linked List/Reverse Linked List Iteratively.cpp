#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next=NULL;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};

Node *takeInput(){
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
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

void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

Node *reverseLLIteratively(Node *head){
	Node *prev=NULL;
	Node *current=head;
	
	
	while(current!=NULL){
		Node *forward=current->next;
		current->next=prev;
		prev=current;
		current=forward;	
	}
	return prev;
}

int main(){
	cout<<"Enter Linked List : ";
	Node *head=takeInput();
	cout<<endl;
	cout<<"Linked List : ";
	print(head);
	cout<<endl;
	cout<<"Reverse : ";
	head=reverseLLIteratively(head);
	print(head);
	return 0;
}
