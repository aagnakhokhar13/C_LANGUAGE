#include<stdio.h>
main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);

    (a%2==0)?printf("Number is even")
            :printf("Number is odd ");
}