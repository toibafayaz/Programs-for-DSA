#include<stdio.h>
#include<stdlib.h>
void create(int);
void display(int);
struct node{
	int data;
	struct node *next;
};
struct node *head=0,*newnode,*temp;
int main(){

	int n;
	printf("Enter size of linked list :");
	scanf("%d",&n);
	
	create(n);
	display(n);
	return 0;
	}
void create(int n){
	
		newnode=(struct node*)malloc(sizeof(struct node));
		
		for(int i=0;i<n;i++){
		
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
}
void display(int n){
	
	temp=head;
	for(int i=0;i<n;i++){
	
	
		printf("%d",temp->data);
		temp=temp->next;
	
}


	

