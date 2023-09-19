#include<stdio.h>
main(){
    int i,ans,n;
    printf("Enter the number :-\n");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        ans=n*i;
        printf("%d * %d = %d",n,i,n*i);
    }
    
}