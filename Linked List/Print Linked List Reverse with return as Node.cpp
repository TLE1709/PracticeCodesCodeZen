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

Node *reverseLinkedListRec(Node *head)
{
    if(head==NULL || head->next==NULL){
    	return head;
	}
	Node *smallHead=reverseLinkedListRec(head->next);
	//Time Complexity with this loop is O(n^2)
//	Node *temp=smallhead;
//	while(temp->next!=NULL){
//		temp=temp->next;
//	}

//	Time Complexity with this is O(n) Best Solution

	Node *tail=head->next;
	tail->next=head;
	head->next=NULL;
		
return smallHead;
}

int main(){
	cout<<"Enter Linked List : ";
	Node *head=takeInputBetter();
	cout<<endl;
	cout<<"Reversed Linked List : ";
	head=reverseLinkedListRec(head);
	print(head);
	return 0;
}
