/******************************************************************************

                            linked list
                            
                            
            reverese the linkedlist 
*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

    struct node
    {
        int data;
        struct node *next; 
    };
    struct node *head,*temp,*newnode;
    
    
    int createlinklist()
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n\n Enter the data :");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
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
    int count = 0;
     if(head==NULL)
    {
        printf("\n\n linked list is empty");
    }
   else if(head == newnode)
    {
        printf("\n\n After reverse the linked list is");
        for(temp =head;temp!=NULL;temp = temp->next)
    {
        printf("\t%d->",temp->data);
        count++;
    }
}
 else
    {
        
   
    printf("\n\n before reverse linked list is :");
    for(temp =head;temp!=NULL;temp = temp->next)
    {
        printf("\t%d->",temp->data);
        count++;
    }
}
    printf("\n the list of link :%d",count);
}

int revereselinklist()
{
    struct node *prevnode,*nextnode,*currentnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while(nextnode!=NULL)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
   head = prevnode;
}
    
int main()
{
    int ch;
    do 
    {
        printf("\n\n 1. create a linked list ");    
        printf("\n\n 2. display linked list");
        printf("\n\n 3. reverese linked list");
        printf("\n\n 4. exit");
        printf("\n\n Enter your choice :");
        scanf("\n%d",&ch);
        switch(ch)
        {
            case 1 :
                createlinklist();
                break;
            case 2 :
                display();
                break;
            case 3 :
                revereselinklist();
                break;
            case 4 :
                  exit(1);
                break;
            default :
               printf("\n\n You Enter wrong choice please enter again ");
                 break;
                
            
        }
    }       while(ch!=4);
    

    return 0;
}



