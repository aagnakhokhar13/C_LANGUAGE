#include<stdio.h>
main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
     for(j=0;j<3;j++)
     {
        printf("%d",a[i][j]);
     }
    }    
    printf("Transpose matrix:-");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
         printf("%d",a[j][i]);
        }
    }

}