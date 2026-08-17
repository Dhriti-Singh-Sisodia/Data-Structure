//WAP to reverse a singly linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;

void createNode()
{
    int choice;
    do 
    {
        struct node *temp;
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode -> data);
        newnode -> prev = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newnode;
    }
    printf("To add one more node press 1 else press 0 : ");
    scanf("%d", &choice);
    }
    while(choice == 1);
}

void reverse()
{
    struct node *prev, *curr, *newnode;
    prev = 0;
    curr = newnode = head;

    while(newnode != NULL)
    {
        newnode = newnode -> next;
        curr -> next = prev;
        prev = curr;
        curr = newnode;
    }
    head = prev;
}

void display()
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
    createNode();
    reverse();
    display();
    return 0;
}