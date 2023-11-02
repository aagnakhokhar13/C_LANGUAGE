#include<stdio.h>
main(){
    int n1,n2,max;
    printf("Enter the number 1:-\n");
    scanf("%d",&n1);
    printf("Enter the number 2:-\n");
    scanf("%d",&n2);

    switch(n1>n2){
        case 1:
        max=n1;
        break;
        case 0:
        max=n2;
        break;
    }
    printf("Maximum number =%d\n",max);
}