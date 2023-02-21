/*not running here but running in online compiler*/
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
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
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
Node *deleteNode(Node *head,int i){
	Node *temp=head;
	int count=0;
	int size=length(head);
	if(i<size){
	if(i==0){
		Node *a=head;
		head=head->next;
		delete a;
	}
	else{
	
	while(count<i-1){
		temp=temp->next;
		count++;
	}
	Node *a=temp->next;
	temp->next=a->next;
	delete a;
}
}
	return head;
}

int main(){
	
	int i;
	cout<<"Enter Values : ";
	Node *head=takeInput();
	cout<<endl;
	cout<<"Linked List : ";
	print(head);
	cout<<endl;
	cout<<"Enter Node to be deleted :";
	cin>>i;
	head=deleteNode(head,i);
	cout<<endl;
	cout<<"Linked List after deleting Node : ";
	print(head);
}
