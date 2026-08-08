//WAP to insert a node at the end of the singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insertend();
void display();
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

    head = firstnode;
    insertend();
    display();
    return 0;
}

void insertend()
{
    struct node *temp;
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new -> data = 99;
    new -> next = NULL;

    if(head == NULL)
    {
        head = new;
    }
    else
    {
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;

        }
        temp -> next = new;
    }

}

void display()
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}
