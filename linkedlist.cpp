#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *createnode(int data){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=0;
	return newnode;
}
void insert(struct node *head,int item){
	struct node *temp;
	temp=createnode(item);
	temp->next=head;
	head=temp;
	
	
	printf("Linked list after insertion is : ");
	struct node *trav=head;
	while(trav!=0){
		printf("%d ",trav->data);
		trav=trav->next;
	}
}
void print(struct node *head){
	while(head!=0){
		printf("%d ",head->data);
		head=head->next;
	}
}

int main(){
	struct node *head=0;
	head=createnode(1);
	head->next=createnode(2);
	head->next->next=createnode(3);
	
	
	printf("Linked list before insertion is :");
	print(head);
	
	
	printf("\n\n\n");
	int item;
	printf("Enter item to insert :");
	scanf("%d",&item);
	insert(head,item);
	
	
}
