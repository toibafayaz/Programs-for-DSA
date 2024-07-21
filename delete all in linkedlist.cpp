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

void display(struct node *head){
	while(head != 0){
		printf("%d",head->data);
		head=head->next;
	}
}

struct node* delete_all(struct node* head, int value) {
    struct node* current = head;
    struct node* previous = NULL;

    
    while (current != NULL) {
        if (current->data == value) {
            
            if (previous == NULL) {
                head = current->next;
                free(current);
                current = head; 
            } else {
                previous->next = current->next;
                free(current);
                current = previous->next; 
            }
        } else {
            
            previous = current;
            current = current->next;
        }
    }
    return head;
}
	

int main(){
	int n;
	printf("Enter size of linked list :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		create(); 
	}
     int x;
     printf("Enter the number to be deleted :");
     scanf("%d",&x);
     head=delete_all(head,x);
     display(head);
}
