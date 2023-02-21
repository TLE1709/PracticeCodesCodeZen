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

bool isPalindrome(Node *head)
{
    bool ispal=true;
    int size=length(head);
    Node *temp=head;
    Node *start=head->next;
    int count=0;
    
    while(start!=temp){
	
	Node *prevLocation=start;
	while(count<size-1){
		start=start->next;
		count++;	
	}
	count=0;
	size--;
	if(start->data!=temp->data){
		ispal=false;
		break;
	}
	
	temp=temp->next;
	start=prevLocation->next;
	
}

return ispal;
}

int main(){
	cout<<"Enter Linked List ";
	Node *head=takeInputBetter();
	cout<<endl;
	cout<<"Linked List : ";
	print(head);
	cout<<endl;
	cout<<"Result : ";
	bool ispalin=isPalindrome(head);
	if(ispalin==1){
		cout<<"It is a palindrome ";
	}
	else{
		cout<<"It is not a palindrome";
	}
}
