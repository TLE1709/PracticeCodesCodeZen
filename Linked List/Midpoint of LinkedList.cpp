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

Node* takeInputBetter(){
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


Node *midPoint(Node *head)
{
    Node *slow=head;
    Node *fast=head->next;
    
    if(head==NULL){
    	return head;
	}
    while(fast!=NULL && fast->next!=NULL){
    	slow=slow->next;
    	fast=fast->next->next;
	}
	
	return slow;
}

int main(){
	cout<<"Enter Linked List : ";
	Node *head=takeInputBetter();
	cout<<endl;
	cout<<"Linked List : ";
	print(head);
	cout<<endl;
	cout<<"MidPoint : ";
	Node *slow=midPoint(head);
	cout<<slow->data<<" ";
	return 0;
}
