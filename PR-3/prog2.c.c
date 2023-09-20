#include<stdio.h>
main(){
    int num,count=0;
    printf("Enter the number ");
    scanf("%d",&n);
     
    while(num!=0)
    {
      num=num/10;
      count++;
    }
    printf("Number ofm digit =%d",count);
} 
