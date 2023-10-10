#include<stdio.h>
main(){
    int ans =sum();
    if(ans==1){
        printf("A  is big ");
    }else if (ans==2){
        printf("B  is big ");
    }else{
        printf("C  is big ");
    }
}
int sum(){
    int a,b,c;
    printf("Enter the a:-");
    scanf("%d",&a);
    printf("Enter the b:-");
    scanf("%d",&b);
    printf("Enter the c:-");
    scanf("%d",&c);
    if(p>q && p>r){
        return 1;
    }else if(q>p && q>r){
        return 2;
    }else{
        return 3;
    }
}