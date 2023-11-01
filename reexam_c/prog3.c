#include<stdio.h>
main(){
    int a[40];
    int i,min,n,max;
   
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter the array element:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1;i<n;i++){
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
}
printf("\nminimum of array is :%d",min);
printf("maximum of array is= %d",max);
}
