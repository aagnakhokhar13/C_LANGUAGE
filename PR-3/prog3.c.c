#include<stdio.h>
main(){
    int n,last,sum;
    printf("Enter the number :-");
    scanf("%d",&n);
    
    last=n%10;
    while(n>9)
    {
     n= n/10;
    }
    sum=n+last;
    printf("sum of first and last digit =%d",sum);
}
