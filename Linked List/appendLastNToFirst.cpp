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

int length(Node *head){
	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
return count;
}

Node *appendLastNToFirst(Node *head, int n)
{
    Node *temp=head;
    Node *start=head;
    int size=length(head);
	int count=1;
	
	if(n==0 || head==NULL){
		return head;
	}
	
    while(count<size-n){
    	start=start->next;
    	count++;
	}
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->next=head;
	head=start->next;
	start->next=NULL;
	
return head;
}

int main(){
	cout<<"Enter Linked List : ";
	Node *head=NULL;
	head=takeInputBetter();
	cout<<"Linked List : ";
	print(head);
	cout<<"\n";
	cout<<"Enter N : ";
	int n;
	cin>>n;
	cout<<"\n";
	head=appendLastNToFirst(head,n);
	cout<<"New Linked List : ";
	print(head);
	return 0;
}
