#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int n){
		data=n;
		next=NULL;
	}
};
Node *insertEnd(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		return temp;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
		
	}
	curr->next=temp;
	return head;
}
void display(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
int main(){
	Node *head=NULL;
	head=insertEnd(head,10);
	head=insertEnd(head,20);
	display(head);
	return 0;
}
