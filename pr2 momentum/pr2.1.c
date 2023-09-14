#include<stdio.h>
main(){
    float unit;
    float amount,charge;

    printf("Enter the unit:-125\n");
    scanf("%f",&unit);

    if( unit <=50){
        amount=unit*.50;

    }else if(unit <=150){
        amount=25+((unit-50)*0.75);
    
    }else if (unit<=250){
        amount=100+((unit-150)*1.20);
    
    }else if(unit>=250){
        amount=220+((unit-250)*1.5);
    } 

        charge= amount * 0.20;
        amount= amount + charge;
        printf(" Total bill=%f",amount);
    
    

}
