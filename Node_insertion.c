//WAP to insert a node in the beginning of the linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insertbeg(struct node **head); //Double pointer is used so this function can update the original head pointer to the linked list.
int main()
{
struct node *firstnode;
struct node *secondnode;
struct node *thirdnode;

firstnode = (struct node*)malloc(sizeof(struct node));
secondnode = (struct node*)malloc(sizeof(struct node));
thirdnode = (struct node*)malloc(sizeof(struct node));
firstnode -> data = 21;
firstnode -> next = secondnode;
secondnode -> data = 62;
secondnode -> next = thirdnode;
thirdnode -> data = 39;
thirdnode -> next = NULL;

insertbeg(&firstnode); 
struct node *temp = firstnode;
while(temp != NULL)
{
    printf("%d\n", temp -> data);
    temp = temp -> next;
}
return 0;
}

void insertbeg(struct node **head)
{
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    new -> data = 56;
    new -> next = *head;
    *head = new;
}