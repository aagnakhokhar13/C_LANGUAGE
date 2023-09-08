#include<stdio.h>
main(){
    int a,b,c;
    printf("Enter the values: ");
    scanf("%d",&a);
     printf("Enter the value ");
    scanf("%d ",&b);


    c=(a*a*a) +(3 *a*a *b) +(3 *a*b*b) +(b*b*b);

     printf("c = %d",c);
}