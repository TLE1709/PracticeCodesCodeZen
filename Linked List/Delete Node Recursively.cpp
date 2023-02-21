#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
	Node(int data){
		this->data=data;
		next=NULL;
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

Node *deleteNode(Node *head,int pos){
	
	if(head==NULL){
		return head;
	}
	
	if(pos==0){
		Node *a=head;
		head=head->next;
		delete a;
		return head;
	}
	
	
	head->next=deleteNode(head->next,pos-1);
	return head;
}

void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	cout<<"Enter Linked List : "<<endl;
	Node *head=takeInput();
	print(head);
	cout<<"Enter Position to be deleted : "<<endl;
	int pos;
	cin>>pos;
	deleteNode(head,pos);
	cout<<"New Linked List : ";
	print(head);
	return 0;
	
}
