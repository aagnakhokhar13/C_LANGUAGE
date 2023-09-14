#include<stdio.h>
main(){
    int choice1,choice2;
    printf("PRESS 1 FOR ENGLISH\n");
    printf("PRESS 2 FOR HINDI\n");
    printf("PRESS 3 FOR GUJARATI\n");

    printf("Enter your choice1\n");
    scanf("%d",&choice1);
    
    switch(choice1){
       case 1:
       printf("PRESS 1 FOR INTERNET RECHARGE\n");
       printf("PRESS 2 FOR TOP UP RECHARGE \n");
       printf("PRESS 3 FOR SPECIAL RECHARGE\n");
       scanf("%d",&choice2);
    switch(choice2)
    {
        case 1:
        printf("YOU HAVE SUCCESFULLY RECHARGED\n");
        break;

        case 2:
        printf("AAPNE SAFALTAPURVAK  TOP RECHARGE KIYA HAI\n");
        break;

        case 3:
        printf("TAME SAFALTAPURVAK  SPECIAL RECHARGE KARYU CHE\n");
        break;

        default:
        printf("INVALID CHOICE\n");
    }
    }
}