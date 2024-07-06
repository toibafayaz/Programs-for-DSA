
#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to find the sum and average of elements in a linked list
void findSumAndAverage(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    int sum = 0;
    int count = 0;

    struct Node* current = head;
    while (current != NULL) {
        sum += current->data;
        count++;
        current = current->next;
    }

    double average = (double)sum / count; // Cast sum to double for accurate division

    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2lf\n", average);
}

int main() {
    struct Node* head = newNode(10);
    head->next = newNode(15);
    head->next->next = newNode(5);

    findSumAndAverage(head);

    return 0;
}
