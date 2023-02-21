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
int length(Node *head){
	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	
return count;
}

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
void printIthNode(Node *head, int i)
{	int size=length(head);
	
    int index;
    Node *temp=head;
    for(index=0;index<=i;index++){
    	
		if(i>=size || i<=0){
		cout<<" ";
		}	
    	else if(index==i){
    		cout<<temp->data;
		}
		else{
		temp=temp->next;
		}
	}
}

int main(){
	int i;
	cout<<"Enter Elements in Linked List \n";
	Node *head=takeInput();
	cout<<"Enter Index to be shown: ";
	cin>>i;
	printIthNode(head,i);
	return 0;
}
