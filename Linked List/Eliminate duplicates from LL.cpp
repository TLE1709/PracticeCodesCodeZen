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

Node *removeDuplicates(Node *head)
{

	Node *temp=head;
	Node *start=head->next;
	
	while(start!=NULL)
	{
		if(head==NULL){
			return head;
		}
		if(temp->data==start->data){
			if(start->next==NULL){
				temp->next=NULL;
				break;
			}
			else{
			start=start->next;
			}
			
		}
		
		else{
			temp->next=start;
			temp=start;
			start=start->next;
		}
	}
	return head;
}

int main(){
	cout<<"Enter Linked List : ";
	Node *head=takeInputBetter();
	cout<<"\n";
	cout<<"Linked List : ";
	print(head);
	cout<<"\n";
	head=removeDuplicates(head);
	cout<<"New Linked List : ";
	print(head);
	return 0;
	
}
