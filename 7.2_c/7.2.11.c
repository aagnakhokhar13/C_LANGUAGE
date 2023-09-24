#include<stdio.h>
main(){
    int i,j,s,n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n-1;s++)
        {
        printf("-");
        }
        for(j=1;j<=i;j++){
           
          printf("* ");
        }
        printf("\n");
    }
}