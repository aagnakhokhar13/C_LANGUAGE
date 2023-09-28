#include<stdio.h>
main(){
    int i,n;
    printf("Enter array size:-\n");
    scanf("%d",&n);
    int a[n];
    int square=0;

    for(i=0;i<n;i++){
    printf("Enter the a[%d]",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    square = a[i] * a[i];
    printf("square is %d\n",square);
    }
}