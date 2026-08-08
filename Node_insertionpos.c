//WAP to insert a node at a given position of the singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insertpos();
void display();
int main()
{
    struct node *firstnode;
    struct node *secondnode;
    struct node *thirdnode;
    struct node *fourthnode;

    firstnode = (struct node*)malloc(sizeof(struct node));
    secondnode = (struct node*)malloc(sizeof(struct node));
    thirdnode = (struct node*)malloc(sizeof(struct node));
    fourthnode = (struct node*)malloc(sizeof(struct node));

    firstnode -> data = 43;
    firstnode -> next = secondnode;
    secondnode -> data = 34;
    secondnode -> next = thirdnode;
    thirdnode -> data = 56;
    thirdnode -> next = fourthnode;
    fourthnode -> data = 77;
    fourthnode -> next = NULL;

    head = firstnode;
    insertpos();
    display();

    return 0;
}

void insertpos()
{
    int position, i;
    printf("Enter the position at which you want to insert the node:");
    scanf("%d", &position);
    struct node *temp;
    struct node *new = (struct node*)malloc(sizeof(struct node));
    temp = head;
    new -> data = 93;
    new -> next = NULL;

    for(i=1; i<position-1; i++)
    {
        temp = temp -> next;

    }
    new -> next = temp -> next;
    temp -> next = new;

}

void display()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
