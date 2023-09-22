#include<stdio.h>
main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            if(j%2==0){
                printf("0\n");
            }else{
                printf("1\n");
            }
        }
        printf("\n");
    }
}
    
    