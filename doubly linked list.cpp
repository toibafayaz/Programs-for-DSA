#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=0, *newnode;
void create(){
	
	struct node *temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
}
void display(){
	struct node *trav=head;
	while(trav != 0){
		printf("%d  -> ",trav->data);
		trav=trav->next;
	}
}
int main(){
	int n;
	printf("Enter size of linked list :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		create();
	}
	printf("Linked list is :");
	display();
}
