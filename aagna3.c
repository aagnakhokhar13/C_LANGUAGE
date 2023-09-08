#include<stdio.h>
main(){
    int x,y,z;
    printf("Enter the two numbers :");
    scanf("%d %d",&x, &y);

    z=(x*x) +(2*x*y) +(y*y);

    printf("z is = %d",z);
}