#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=0, *newnode,*tail;
void create(){
	
	struct node *tail;
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
void delete_atBegin(){
	struct node *temp;
	temp=head;
	head=head->next;
	head->prev=0;
	temp->next=0;
	free(temp);
}
void delete_atEnd(){
	struct node *temp;
	temp=tail;
	tail->prev->next=0;
	tail=tail->prev;
	free(temp);
}
void delete_atPos(){
	int pos;
	printf("Enter position :");
	scanf("%d",&pos);
	int i=1;
	struct node *temp;
	
	while(i<pos-1){
		temp=temp->next;
	}

	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}
int main(){
	int n;
	printf("Enter size of linked list :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		create();
	}
	printf("Linked list  before any deletion is :");
	display();
	printf("\n\n\n");
	int ch;
	printf("Enter choice (1 for delete at begin,2 for delete at end,3 for delete at position )  :");
	scanf("%d",&ch);
	if(ch == 1){
		delete_atBegin();
		printf("Linked list  after  deletion at beginning  is :");
        display();
	}
	else if(ch == 2){
		delete_atEnd();
		printf("Linked list  after  deletion at end  is :");
        display();
	}
	else{
		delete_atPos();
		printf("Linked list  after  deletion at position   is :");
        display();
	}
		
	}

