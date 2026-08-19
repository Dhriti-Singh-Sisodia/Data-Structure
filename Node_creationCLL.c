//WAP to create node of circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void createCLL()
{
    int choice;
    do 
    {
        struct node *new;
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new->data);
        new -> next = NULL;

        if(head == NULL)
        {
            tail = head = new;
            tail -> next = head;
        }
        else
        {
            tail -> next = new;
            tail = new;
            tail -> next = head;
        }
        printf("Press 1 to add one more node else press 0: ");
        scanf("%d", &choice);

    }while(choice == 1);
}

void display()
{
    struct node *temp = head;
    printf("Linked list: ");
    if(head == NULL)
    {
        printf("Empty");
        return;
    }
    do
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }while(temp != head);
    printf("Back to head\n");
}

int main()
{
    createCLL();
    display();
    return 0;
}
