#include<stdio.h>
#include<stdlib.h>
// insert list at the beginning
void main()
{
    struct node
    {
        int data;
        struct node * next;
    };

    struct node *head, *newnode, *temp;
    head=0;
    int choice=1, choice1=1;
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


//deletion from begining

    /*printf("\n delete first node of the list");
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
            temp = head;
            head = head->next;   //head->next means head->next pointing Address part of first node
                                //that store the value of 2nd node
                                //let at first head is 100(address of first node)
                                //now the head will be 200 (address of second node)
            free(temp);
            printf("\n Deleted succfully \n");
            temp = head;            //traverse here again
    while( temp!=0)
    {
        printf("->%d", temp->data);
        temp = temp->next;

    }
    //printf("%d",newnode->data);

    getch();

    }*/
  //  DeleteFromEnd

        struct node *prevnode;
        temp = head;
    printf("\n delete last node of the list");
    while( temp ->next!=0)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode->next =0;
    }
    free(temp);
    printf("\n Deleted succfully \n");



    temp = head;                     //traverse here again
    while( temp!=0)
    {
        printf("->%d", temp->data);
        temp = temp->next;

    }
    //printf("%d",newnode->data);

    getch();



}
