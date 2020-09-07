/******************************************************************************

linked list creation and representation 

deletion of the linkedlist

1. delete at the begining
2. delete at the end
3.delete at specific position

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
  struct node *head,*newnode,*temp;

int createlinkedlist()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n\n\t enter the data :");
    scanf("\n\n\t %d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL)
    {
        head =temp= newnode;
    }
    else
    {
        temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newnode;
    }
}

void display()
{
    temp = head;
    int count =0;
    if(head==NULL)
    {
        printf("\n\n\t list empty");
    }
    else
    {
       for(temp = head;temp!=NULL;temp=temp->next)
       {
           printf("\t\t%d->",temp->data);
           count++;
       }
    }
    printf("\n the nodes is :%d",count);
}

int deleteatbegining()
{
    if(head==NULL)
    {
        printf("\n\n list is empty:");
    }
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
    }
}

int deleteatend()
{
    struct node *prevnode;
    temp = head;
    while(temp->next!=NULL)
    {
        prevnode = temp;
        temp = temp->next;
        
    }
    if(temp==head)
    {
        head = NULL; 
    }
    else
    {
         prevnode->next = NULL;
    }
    free(temp);
}

int dspecificposition()
{
    struct node *nextnode;
    int pos,i =1;
    temp = head;
   printf("\n\n Enter the position :");
   scanf("\n%d",&pos);
   while(i<pos-1)
   {
       temp = temp->next;
       i++;
   }
   
   nextnode = temp->next;
   temp->next = nextnode->next;
   free(nextnode);
   
}

int main()
{
  head = NULL;
  int ch;
  do 
  {
    printf("\n\n\t 1. create a node :");
    printf("\n\n\t 2. Display linked list");
    printf("\n\n\t 3. delete at begining");
    printf("\n\n\t 4. delete at the end");
    printf("\n\n\t 5. delete at specific position");
    printf("\n\n\t Enter your choice :");
    scanf("\n\n\t %d",&ch);
    switch(ch)
    {
        case 1 :
            createlinkedlist();
            break;
        case 2 :
            display();
            break;
        case 3 :
            deleteatbegining();
            break;
        case 4 :
            deleteatend();
            break;
        case 5 :
            dspecificposition();
            break;
        case 6 :
            exit(1);
            break;
        default :
            printf("\n\n\t you enter wrong choice Enter again ");
            break;
    }
  }  while(ch!=6);

    return 0;
}





