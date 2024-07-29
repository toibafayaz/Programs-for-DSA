#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=0, *newnode,*tail;
void create(){
	
	
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	if(head==0){
		head=tail=newnode;
	}
	else{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
}
void display(){
	struct node *trav=head;
	while(trav != 0){
		printf("%d  ",trav->data);
		trav=trav->next;
	}
}
void reverse(){
	struct node *current,*nextnode;
	current=head;
	while(current != 0){
		nextnode=current->next;
		current->next=current->prev;
		current->prev=nextnode;
		current=nextnode;
	}
	current=head;
	head=tail;
	tail=current;
}
int main(){
	int n;
	printf("Enter size of linked list :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		create();
	}
	printf("Linked list before reversing is :");
	display();
	printf("\n\n\n");
	reverse();
	printf("Linked list after reversing is :");
	display();
	
}
