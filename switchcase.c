#include<stdio.h>
int main(){
    int ch;
    const int burger =99,pizza=149,saqndwich=99;
    int order;
    do{
        printf("Press 1 for burger order:-\n ");
        printf("Press 2 for Pizza order:-\n");
        printf("Press 3 for Sandwich order:-\n");
         printf("Press 0 for Exit:-\n");
         scanf("%d",&ch);

         printf("How many burger order\n");
         scanf("%d",&order);

         if(order>0){
            printf("--------YOUR BILL----------\n");
            printf("Burger bill :-%d\n",order * burger);

         }else{
            printf("Order is invlaid");
         }
         break;
        
    
}while(ch!=0);
}
