#include<stdio.h>
main(){
    int SALARY;
    int HRA;
    int DA;
    int TA;
    int GROSS;

    printf("Enter the SALARY \n");
    scanf("%d",&SALARY); 
    printf("Enter the HRA \n");
    scanf("%d",&HRA);
     printf("Enter the DA \n");
    scanf("%d",&DA);
     printf("Enter the TA \n");
    scanf("%d",&TA);

    GROSS=SALARY+(SALARY*HRA/100)+(SALARY*DA/100)+(SALARY*TA/100);
    printf("GROSS =%d",GROSS);

}

