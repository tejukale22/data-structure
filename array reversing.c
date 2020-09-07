/******************************************************************************

//write program to reverse an array 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5],b[5];
    
    printf("\n Enter the elements :");
    
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
        
        printf("\n Before reversing the array ");
        
            for(int i=0;i<5;i++)
               printf("%d\t",a[i]);
               
            for(int i=0,j=4;i<5;i++,j--)
            b[j]=a[i];
            
            printf("\n After reversing the array ");
        
            for(int i=0;i<5;i++)
               printf("%d\t",b[i]);
               
            
    return 0;
}

