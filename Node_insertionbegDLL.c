//WAP to insert newnode at the beginning of doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void createDLL()
{
    int choice;
    do 
    {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode -> data);
        newnode -> prev = NULL;
        newnode -> next = NULL;
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
    printf("To add one more node press 1 else press 0 : ");
    scanf("%d", &choice);
    }
    while(choice == 1);
}

void displayDLL()
{
    struct node *temp = head;
    printf("Linked list: ");
    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main()
{
    createDLL();
    displayDLL();
    return 0;
}