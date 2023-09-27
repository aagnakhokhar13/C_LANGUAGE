#include<stdio.h>
main(){
    int i,n,sum=0;
    int a[n];
         
         printf("Enter the size of  array ");
         scanf("%d",&n);

        

         printf("Enter the element :-");
         for(i=0;i<n;i++){
            printf("Enter a[%d]",i);
            scanf("%d",a[i]);
         }
         for(i=0;i<n;i++){
            sum=a[i];
         }
         printf("sum is %d",sum/n);
}
