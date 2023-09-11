#include<stdio.h>
main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    if(n>0)
    {
      printf("its positive ");
    }
    else if (n<0)
    {
        printf("its negative ");
    }
    else
    {
      printf("its neutral ");
    }
}