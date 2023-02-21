#include<iostream>
using namespace std;

template <typename T>
class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode *left;
		BinaryTreeNode *right;
		
		BinaryTreeNode(int data){
			this->data=data;
			this->left=NULL;
			this->right=NULL;
		}
		
		~BinaryTreeNode(){
			delete left;
			delete right;
		}
};

BinaryTreeNode<int>* takeInput(){
	
	int rootData;
	cout<<"Enter Data : ";
	cin>>rootData;
	
	if(rootData==-1){
		return NULL;
	}
	
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int>* leftChild=takeInput();
	BinaryTreeNode<int>* rightChild=takeInput();
	root->left=leftChild;	
	root->right=rightChild;
	
	return root;	
}

void printBinaryTree(BinaryTreeNode<int>*root){
	if(root==NULL){
		return;
	}
	
	cout<<root->data<<": ";
	if(root->left!=NULL){
		cout<<"L"<<root->left->data<<" ";
	}
	
	if(root->right!=NULL){
	cout<<"R"<<root->right->data<<" ";
	}
	cout<<endl;
	
	printBinaryTree(root->left);
	printBinaryTree(root->right);
}

int main(){
	BinaryTreeNode<int>*root=takeInput();
	printBinaryTree(root);	
}
