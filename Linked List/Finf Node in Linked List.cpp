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


void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int findNode(Node *head,int data){
	
	int count=0;
	while(head!=NULL){
		if(head->data==data){
			break;
		}
		else{
			count++;
			head=head->next;
		}
	}
    
	if(head==NULL){	
	return -1;
}
    else{
        return count;
    }

}

int main(){
	cout<<"Enter Values into Linked List : ";
	Node *head=takeInput();
	cout<<endl;
	cout<<"Linked List : ";
	print(head);
	cout<<"Enter Value to be searched : ";
	int data;
	cin>>data;
	int pos=findNode(head,data);
	cout<<pos<<" ";
}
