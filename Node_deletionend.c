//WAP to delete the node from end of singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void deleteatend();
void display();
int main()
{
    struct node *newnode;
    struct node *temp;
    int n;

    printf("Enter the numbers of nodes you want to insert in a linked list: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for %d: ", i+1);
        scanf("%d", &newnode -> data);
        newnode -> next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }
    deleteatend();
    display();
    return 0;
}

void deleteatend()
{
    struct node *temp, *prev;
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
        return;
    }
    while(temp -> next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev -> next = NULL;
    free(temp);
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