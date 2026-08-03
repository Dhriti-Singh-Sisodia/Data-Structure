#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    //Create three node pointers
    struct node *firstnode;
    struct node *secondnode;
    struct node *thirdnode;
    //Allocate memory for each node
    firstnode = (struct node*)malloc(sizeof(struct node));
    secondnode = (struct node*)malloc(sizeof(struct node));
    thirdnode = (struct node*)malloc(sizeof(struct node));

    //Store data and link the nodes
    firstnode -> data = 21;
    firstnode -> next = secondnode;
    secondnode -> data = 3;
    secondnode -> next = thirdnode;
    thirdnode -> data = 6;
    thirdnode -> next = NULL;  //End of linked list

    //print the linked list
    struct node *temp = firstnode;

    printf("Linked List:  ");
    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
    //Free allocated memory
    free(firstnode);
    free(secondnode);
    free(thirdnode);

    return 0;
}
