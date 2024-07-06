#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int findMax(struct node*);
void create();
struct node{
	int data;
	struct node *next;
};
struct node*head=NULL,*tail=NULL;
int main(){
	create();

	
}
void create(){
	int n;
	printf("Enter size of linked list :");
	scanf("%d",&n);
	struct node *temp;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter item;");
		scanf("%d",temp->data);
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=temp;
		}
	}
		int max=findMax(head);
	printf("Maximum element is %d ",max);
}
int findMax(struct node *head){
	int max=INT_MIN;
	struct node *current=head;
	while(current!=NULL){
		if((current->data)>max){
			max=current->data;
		}
		current=current->next;
	}
	return max;
}

