//Very Important Question Insert Node Recrusively
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

Node *insertNode(Node *head,int i,int data){
	
	//base case
	if(head==NULL){
		if(i==0){
			Node *newNode=new Node(data);
			head=newNode;
			return head;
		}
		return head;
	}
	
	Node *newNode=new Node(data);
	
	if(i==0){
		newNode->next=head;
		head=newNode;
		return head;
	}
	
	head->next=insertNode(head->next,i-1,data);
	
	return head;	
}

void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}


int main(){
	cout<<"Enter Values into Linked List : "<<endl;
	Node *head=takeInput();
	cout<<"Linked List : "<<endl;
	print(head);
	int i,data;
	cout<<"Enter to insert node : ";
	cin>>i;
	cout<<"Enter data to be inserted : ";
	cin>>data;
	head=insertNode(head,i,data);
	print(head);
	return 0;
	
}
