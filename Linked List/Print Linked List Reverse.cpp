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


void printReverse(Node *head)
{
    if(head==NULL){
    	return;
    	
	}
	printReverse(head->next);
	cout<<head->data<<" ";
}

int main(){
	cout<<"Enter Linked List : ";
	Node *head=takeInputBetter();
	cout<<endl;
	cout<<"Reverse : ";
	printReverse(head);
	return 0;
}
