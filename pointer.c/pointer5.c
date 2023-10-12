#include<stdio.h>
main(){
    char ch[50]={"india"};
    int i,j;
    
    for(i=0;i<5;i++){
        for(j=1;j<=i;j++){
            printf("%c",ch[i]);

        }
        printf("\n");
        
    }
}