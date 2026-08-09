//WAP to delete a node from beginning of a singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void deleteatbeg();
void display();
int main()
{
    struct node *newnode;
    struct node *temp;
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    deleteatbeg();
    display();
    return 0;
}

void deleteatbeg()
{
    struct node *temp;
    temp = head;
    if(head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if(head -> next == NULL)
    {
        head = 0;
        free(temp);
    }
    else
    {
        head = head->next;
        free(temp);
    }
}

void display()
{
    printf("\nLinked List: ");
    struct node *temp;
    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");
}