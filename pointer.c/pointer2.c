#include<stdio.h>
main(){
    int a[10]={5,6,7,5,9},i;
    int *p= &a;

    for(i=0;i<5;i++){
        printf("%u\n",*p);
        p++;
    }
}