#include<stdio.h>
main(){
    int i,j;
    int sum=0;
    int a[5][5]={{1,2,3,4,5},
                {6,7,8,9,10},
                {4,5,6,8,9},
                {6,7,8,9,4},
                {5,4,3,2,1}
                };

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==0 ||i==4 ||j==0||j==4){
               printf("%d ",a[i][j]);
               sum=sum+a[i][j];
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("sum of boundary elements are %d",sum);
}