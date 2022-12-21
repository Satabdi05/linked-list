#include<stdio.h>
#include<stdlib.h>

void main()
{
    struct node
    {
        int data;
        struct node * next;
    };

    struct node *head, *newnode, *temp;
    head=0;
    int choice=1;
    while (choice)
    {
        newnode = (struct node *) malloc(sizeof(struct node));
        printf("Enter Data ");
        scanf("%d->", &newnode->data);
        newnode->next=0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
                temp->next = newnode;
                temp = newnode;
        }
        printf("Do you want to continue(0,1)?");
        scanf("%d", &choice);
    }
    temp = head;            // traverse the list from here
    while( temp!=0)
    {
        printf("%d->", temp->data);
        temp = temp->next;

    }
    getch();

/*//// insert node begining//////

        newnode =(struct node *) malloc(sizeof(struct node));
        printf("Enter data you want to insert:");
        scanf ("%d", &newnode -> data);

        newnode->next = head;
        head = newnode;

    printf("created succfully \n");
    temp = head;            //traverse here again
    while( temp!=0)
    {
        printf("%d", temp->data);
        temp = temp->next;

    }
    //printf("%d",newnode->data);

    getch();

*/
/* //////////insert node last of the list/////////////////
        newnode = (struct node *) malloc(sizeof(struct node));   // create newnode
        printf("Enter Data ");
        scanf("%d", &newnode->data);

        newnode->next=0;            //this node insert at last so newnode->next( address of next node) would be 0

        temp=head;
        while (temp->next!=0)       // continue the loop untill the temp->next is 0
        {
              temp = temp->next;
        }
                temp->next = newnode;
        printf("%d", newnode->data);


        temp = head;              //traverse here again
        while( temp!=0)
        {
            printf("%d", temp->data);
            temp = temp->next;

    }
                                        // this code for when temp->next is 0. newnode has been inserted here
        getch();*/
}
