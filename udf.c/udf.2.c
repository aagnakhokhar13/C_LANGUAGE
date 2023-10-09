#include<stdio.h>
main(){
    int i,no;
    printf("Enter the number :-");
    scanf("%d",&no);

    for(i=0;i<=no;i++){
        sum();
    }
}
void sum()
{
int a=10,b=15,c;
c=a+b;
printf("Ans = %d\n",c);
}