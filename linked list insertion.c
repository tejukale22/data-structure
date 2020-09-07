/******************************************************************************

                          linked list create and representation 
                          
                          // Singly linked list
                          
                          insertion of linked list 
                          1. insert at begining 
                          2. insert at the end
                          3. insert at specific position
*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;    //   structure of  linked list node
    
};
struct node *head,*newnode,*temp;             // head pointer hold the address of the starting node of the linked list

int createlinkedlist()                  // create the linked list 
{
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n enter the data :");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL)
    {
        head =temp = newnode;
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

 void displaylinkedlist()
 {
    
    temp = head;
    int count = 0;
    if(head!=NULL)
    {
        for(temp=head;temp!=NULL;temp=temp->next)
        {
            printf("\t%d->",temp->data);
             count++;
        }
       
    }
    else
    {
        printf("\n\n linked list is empty");
    }
    
    printf("\n\n list of data :%d",count);
 }
 
 int insertatbegin()
 {
     newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n enter the data :");
    scanf("%d",&newnode->data);
     if(head==NULL)
     {
         head = newnode;
         
     }
     else
     {
         newnode->next = head;
         head = newnode;
     }
 }
 int insertatend()
 {
     newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n enter the data :");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
        temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
}


 int insertatspecific()
 {
     int pos;
     int i=1;
     int count=0;
     printf("\n\n enter the position of linked list where you want to insert a node :");
     scanf("%d",&pos);
     if(pos>count)
     {
         printf("\n\n Invalid position");
     }
     else
     {
        temp = head;
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
     newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n enter the data :");
    scanf("%d",&newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;
    }
 }

int main()
{
    int ch;
    int count = 0;
    head = 0;
    do
    {
    printf("\n\n\t 1.create linked list :");
    printf("\n\n\t 2.display linked list ");
    printf("\n\n\t 3.insert at begining :");
    printf("\n\n\t 4.insert at end :");
    printf("\n\n\t 5.insert at specific position :");
    printf("\n\n\t 6.exit");
    printf("\n\n\t enter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case  1:
        createlinkedlist();
               break;
        case 2:
        displaylinkedlist();
                break;
        case 3:
            insertatbegin();
            break;
        case 4:
            insertatend();
            break;
        case 5:
            insertatspecific();
            break;
        case 6:
                exit(1);
                break;
        default:
            printf("you enter wrong choice :");
            break;
    }
    
    } while(ch!=6);
    

}











