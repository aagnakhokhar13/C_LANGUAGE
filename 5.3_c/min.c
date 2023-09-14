#include<stdio.h>
main(){
    int a,b,c;
    printf("Enter the a:-\n");
    scanf("%d",&a);
    printf("Enter the b:-\n");
    scanf("%d",&b);
    printf("Enter the c:-\n");
    scanf("%d",&c);

    (a<b)
    ?
      (a<c)
      ?printf("a is min")
      :printf("c is min")
   :(b<c)
      ?printf("b is min");
      :printf("c is min");

}











