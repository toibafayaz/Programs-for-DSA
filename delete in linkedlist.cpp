#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=0;
void create(){
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head == 0){
		head=newnode;
		temp=head;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
}

void delete_begin(){
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
	printf("Linked list after deletion at start   is :");
	struct node *trav=head;
	while(head != 0){
		printf("%d",trav->data);
		trav=trav->next;
	}
	
}
void delete_end(){
	struct node *temp,*prevnode;
	temp=head;
	while(temp->next != 0){
		prevnode=temp;
		temp=temp->next;
	}
	prevnode->next=0;
	free(temp);
	printf("Linked list after deletion at end  is :");
	struct node *trav=head;
	while(head != 0){
		printf("%d",trav->data);
		trav=trav->next;
	}
	
}
void delete_pos(){
	struct node *temp,*nextnode;
	int pos,i=1;
	temp=head;
	printf("Enter position :");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
	
	printf("Linked list after deletion at specific position  is :");
	struct node *trav=head;
	while(head != 0){
		printf("%d",trav->data);
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
/*	printf("Linked list before deletion is :");
	struct node *trav=head;
	while(head != 0){
		printf("%d",trav->data);
		trav=trav->next;
	}
	printf("\n\n\n");*/
	int ch;
	printf("enter choice :");
	scanf("%d",&ch);
	
	if(ch==1){
	
	delete_begin();
}
	
	else if(ch==2){
	
	delete_end();
}

	else if (ch==3){
	
	delete_pos();
}
}
