//WAP to insert a node after specific element in a singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insertele();
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

    firstnode -> data = 2;
    firstnode -> next = secondnode;
    secondnode -> data = 4;
    secondnode -> next = thirdnode;
    thirdnode -> data = 6;
    thirdnode -> next = fourthnode;
    fourthnode -> data = 8;
    fourthnode -> next = NULL;

    head = firstnode;
    insertele();
    display();
    return 0;
}

void insertele()
{
    struct node *temp = head;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new -> data = 10;
    new -> next = NULL;
    int key;
    printf("Enter the element after which you want to insert the node: ");
    scanf("%d", &key);
    
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            // Key found -> insert new node
            new->next = temp->next;
            temp->next = new;
            return;
        }
        temp = temp->next;
    }

    // Loop ended -> key was not found
    printf("Element not found\n");
}

void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
}