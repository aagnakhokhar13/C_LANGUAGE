#include<stdio.h>
main(){
    int a[100],i,n,min,max;

    printf("Enter the number of  element :-\n");
    scanf("%d",&n);  
     printf("Enter the element :-\n");
     for(i=0;i<n;i++){
       scanf("%d",&a[i]);
     }
     min = a[0];
     max = a[0];
     for(i=1;i<n;i++){
        if(a[i] < min){                                                                                                                                                                     
                                                                                                                                                      
            min=a[i];
        }
        if(a[i] > max){
        max= a[i];
     }
    
     }
     printf("Minimum element = %d",min);
     printf("Maximum element = %d",max);

}
