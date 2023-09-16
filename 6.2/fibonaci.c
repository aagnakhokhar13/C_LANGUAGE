#include<stdio.h>
main(){
    int n,n1=0,n2=1,n3;

    printf("Enter the number :-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        printf("%d\n",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
   
}