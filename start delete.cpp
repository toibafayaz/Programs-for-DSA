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
	/*printf("Linked list before insertion is :");
	struct node *trav=head;
	while(head != 0){
		printf("%d",trav->data);
		trav=trav->next;
	}
	printf("\n\n\n");*/
	printf("Linked list after deleting at start is :");
	delete_begin();
	
}
