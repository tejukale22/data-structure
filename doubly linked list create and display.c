/******************************************************************************

implimentation of doubly linked list

1. creation 
2. display
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node  *next;
    struct node *prev;
};

struct node *head,*newnode,*temp;

int createlinkedlist()
{
    struct node *prevnode,*nextnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n\n Enter the new data :");
    scanf("\n%d",&newnode->data);
    prevnode = 0;
    nextnode = 0;
    if(head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->prev = prevnode;
        temp->next = newnode;
        prevnode = temp;
        temp = newnode;
    }
}

void display()
{ 
    int count = 0;
    if(head == NULL)
    {
        printf("\n\n list is empty");
    }
    else
    {
    for(temp = head;temp!=NULL;temp = temp->next)
    {
        printf("\t\t<-%d->",temp->data);
        count++;
    }
  }
    printf("\n\n count of list is :%d",count);
}

int main()
{
    int ch;
    head = 0;
    do
    {
        printf("\n\n 1. create the  doubly linlked list :");
        printf("\n\n 2. dislapy ");
        printf("\n\n 3. exit");
        printf("\n\n Enter your choice :");
        scanf("\n%d",&ch);
        switch(ch)
        {
            case 1 :
                createlinkedlist();
                break;
                
            case 2 :
                    display();
                break;
                
            case 3 :
            
                break;
                
            default :
                printf("\n\n You Enter wrong choice please enter again ");
                break;
        }
    }   while(ch!=3);
   

    return 0;
}
