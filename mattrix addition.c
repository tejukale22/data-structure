/******************************************************************************

                           mattrix addition
*******************************************************************************/

#include <stdio.h>

int main()
{
    int r,c,a[10][10],b[10][10],d[10][10];
    
    printf("\n Enter the number of elements to be enter into mattrix in row & column respectively:");
    scanf("%d%d",&r,&c);
    
    printf("\n Enter the number of elements in mattrix A :");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    

    printf("\n Enter the number of elements in mattrix B :");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
    
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j] = a[i][j]+b[i][j];
        }
    }
    printf("\n Tha additionof two mattrix is :\n");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}

