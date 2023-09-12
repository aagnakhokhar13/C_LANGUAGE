#include<stdio.h>
main(){
    int a,b,c;
    
    printf("enter the number :");
    scanf("%d",&a);
    printf("enter the number :");
    scanf("%d",&b);
    printf("enter the number :");
    scanf("%d",&c);

    if(a<b)
    {
     if(a<c){

     printf("a is min");
     }else{
        printf("c is min");
     }
    }else{
        if(b<c){
         printf("b is min");
        }else{
            printf("c is min");
        }
    }
    
}