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
		printf("%d       ",trav->data);
		trav=trav->next;
	}
}
void insert_atBegin(){
	struct node *tail;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}
void insert_atEnd(){
	struct node *tail;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	newnode->prev=0;
	newnode->next=0;
	tail->next=newnode;
	newnode->prev=tail;
	tail=newnode;
}
void insert_atPos(){
	int pos;
	printf("Enter position :");
	scanf("%d",&pos);
	int i=1;
	struct node *temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data :");
	scanf("%d",&newnode->data);
	while(i<pos-1){
		temp=temp->next;
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->next->prev=newnode;
}
int main(){
	int n;
	printf("Enter size of linked list :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		create();
	}
	printf("Linked list  before any insertion is :");
	display();
	printf("\n\n\n");
	int ch;
	printf("Enter choice (1 for insert at begin,2 for insert at end,3 for insert at position )  :");
	scanf("%d",&ch);
	if(ch == 1){
		insert_atBegin();
		printf("Linked list  after  insertion at beginning  is :");
        display();
	}
	 if(ch == 2){
		insert_atEnd();
		printf("Linked list  after  insertion at end  is :");
        display();
	}
	if(ch == 3){
		insert_atPos();
		printf("Linked list  after  insertion at position   is :");
        display();
	}
		
	}

