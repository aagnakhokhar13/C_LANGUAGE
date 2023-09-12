#include<stdio.h>
main(){
    int a,b,c,d;
    printf("enter the number :");
    scanf("%d",&a);
    printf("enter the number :");
    scanf("%d",&b);
    printf("enter the number :");
    scanf("%d",&c);
    printf("enter the number :");
    scanf("%d",&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is max");
            }
            else
            {
                printf("d is max");  
            }
        }
        else
        {
            printf("c is max");
        }
    }
    else{
        if(b>c)
        {
              if(b>d){
                 printf("b is max");
              }
        }else
        {
            printf("d is max");
        }
    }else{
        printf("c is max");
    }
}

