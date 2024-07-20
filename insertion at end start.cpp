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
void insert_before(struct node *head,int item){
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
	printf("\n\n\n");
}
void insert_end(struct node *head,int item){
	struct node *temp;
	temp=createnode(item);
	temp->next=0;
	struct node *temp2;
	temp2=head;
	while(temp2->next !=0){
		temp2=temp2->next;
	}
	temp2->next=temp;
	printf("Linked list after insertion is : ");
	struct node *trav=head;
	while(trav!=0){
		printf("%d ",trav->data);
		trav=trav->next;
	}
}
void insert_position(struct node *head,int item){
		struct node *temp;
        temp=createnode(item);
        struct node *temp2;
        int pos;
        printf("Enter the position :");
        scanf("%d",&pos);
        int i=1;
        temp2=head;
        while(i < pos){
        	temp2=temp2->next;
        	i++;
		}
		temp->next=temp2->next;
		temp2->next=temp;
		
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
	insert_before(head,item);
	insert_end(head,item);
	insert_position(head,item);
	
	
}
