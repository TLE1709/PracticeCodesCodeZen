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

Node *takeInput(){
	
	Node *head=NULL;
	Node *tail=NULL;
	
	int data;
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

int length(Node *head){
	int count=0;
	while(head!=NULL){
		count++;
	}
	
	return count;
}

void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

bool isPalindrome(Node *head)
{
    
}

int midPoint(Node *head){
	
	Node *slow=head;	
	Node *fast=head->next;
	
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}	
	
	return slow;
}


int main(){
	
	Node *head=takeInput();
	print(head);
	Node *secondHead=midPoint(head);
}
