/******************************************************************************

transpose of matrrix
*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c,a[10][10];
    
    printf("\n Enter the number of rows and columns respectively :");
    scanf("%d%d",&r,&c);
    
    printf("\n Enter the values in matrrix  :");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n The transpose of matrrix is :\n");
    
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

