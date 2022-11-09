#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
 
void push(struct Node** headRef, int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 
    temp->data = data;
    temp->next = *headRef;
 
    *headRef = temp;
}
 
struct Node* createList(int keys[], int n)
{
    int i;
	struct Node* head = NULL;
	 	
    for (i = n - 1; i >= 0; i--) {
        push(&head, keys[i]);
    }
 
    return head;
}
 
int main(void)
{
    int values[] = {100,200,300,400,500};
    int n = sizeof(values)/sizeof(values[0]);
 
    struct Node* head = createList(values, n);
 
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

