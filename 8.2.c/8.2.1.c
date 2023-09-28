

#include<stdio.h>
void main(){
    int n,m;
    printf("Enter the size of array :-");
    scanf("%d",&n);
  printf("Enter the array size:-");
        scanf("%d",&m);
    int a[n];
    int b[m];
    int c[n+m];
    int i;
    for(i=0;i<n;i++){
        printf("Enter a[%d]",i);
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
      
    for(i=0;i<m;i++){
        printf("Enter b[%d]",i);
        scanf("%d",&b[i]);
        c[i+n]=b[i];
        
    }
 
    printf("Sum of a and b are below:- \n");
     for(i=0;i<n+m;i++){
        printf("%d ",c[i]);
     }
return;
}
