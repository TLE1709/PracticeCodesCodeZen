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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
	if(head1==NULL){
		return head2;
	}
	
	if(head2==NULL){
		return head1;
	}
	Node *finalHead=NULL;
	Node *finalTail=NULL;
	
	if(head1->data<=head2->data){
		finalHead=head1;
		finalTail=head1;
		head1=head1->next;
	}
	else{
		finalHead=head2;
		finalTail=head2;
		head2=head2->next;
	}
	
	while(head1!=NULL && head2!=NULL){
		if(head1->data<head2->data){
			finalTail->next=head1;
			finalTail=finalTail->next;
			head1=head1->next;
		}
		
		else{
			finalTail->next=head2;
			finalTail=finalTail->next;
			head2=head2->next;
		}
	}
	
	if(head1!=NULL){
		finalTail->next=head1;
	}
	if(head2!=NULL){
		finalTail->next=head2;
	}
	
	return finalHead;
}

int main(){
	cout<<"Enter Linked List 1: ";
	Node *head1=NULL;
	head1=takeInputBetter();
	cout<<endl;
	cout<<"Enter Linked List 2: ";
	Node *head2=NULL;
	head2=takeInputBetter();
	cout<<endl;
	cout<<"Merged List :- ";
	Node *head3=mergeTwoSortedLinkedLists(head1,head2);
	print(head3);
}
