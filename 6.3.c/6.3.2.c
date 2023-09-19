#include<stdio.h>
main(){
    int i,fact,n;
    
    printf("Enter the number :-\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
      
       fact=i*fact;
    }
    printf("fact = %d",fact);
}