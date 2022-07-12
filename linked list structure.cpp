#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int val;
	Node* next;

	Node(int data){
		val=data;
		next = NULL;
	}
};

void pushlast(Node* &head,int x){
	
	Node* val = new Node(x);
	// cout<<val->val<<" ";

	Node* temp=head;

	if(temp==NULL){
		head=val;
		return;
	}

	while(temp->next!=NULL){
		// cout<<temp->val<<endl;
		temp=temp->next;

	}
	temp->next=val;
	

}

void pushtop(Node* &head,int x){
	Node* temp=head;
	Node* val=new Node(x);
	val->next=temp;
	head=val;

}

void display(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		temp=temp->next;
	} 
	cout<<endl;
}

int main()
{
    Node* List=NULL;
	for(int a=1;a<=10;a++){
		// pushlast(List,a);
		pushtop(List,a);
		
	}
	display(List);
    return 0;
}
