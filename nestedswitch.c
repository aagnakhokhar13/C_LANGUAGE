#include<stdio.h>
main(){
    int choice;
    printf("PRESS 1 FOR ENGLISH\n");
    printf("PRESS 2 FOR HINDI\n");
    printf("PRESS 3 FOR GUJARATI\n");

    printf("Enter your choice\n");
    scanf("%d",&choice);
    
    switch(choice){
       case 1:
       printf("PRESS 1 FOR INTERNET RECHARGE\n");
       printf("PRESS 2 FOR TOP UP RECHARGE \n");
       printf("PRESS 3 FOR SPECIAL RECHARGE\n");
       
       printf("Enter your choice\n");
       scanf("%d",&choice);
       switch(choice){
        case 1:
        printf("You have succesfully done internet recharge\n");
        break;

        case 2:
        printf("You have succesfully done top up recharge\n");
        break;

        case 3:
        printf("You have succesfully done special recharge\n");
        break;

        default:
        printf("Invalid choice...");
       }
       break;

       case 2:
       printf("Internet recharge ke liye 1 dabaye\n");
        printf("Top up recharge ke liye 2 dabaye\n");
         printf("Special recharge ke liye 3 dabaye\n");


       printf("Enter your choice:-\n");
       scanf("%d",&choice);
       switch(choice){
        case 1:
        printf("Aapne safaltapurvak internet recharge kiya hai\n");
        break;

         case 2:
        printf("Aapne safaltapurvak top up recharge kiya hai\n");
        break;

         case 3:
        printf("Aapne safaltapurvak special recharge kiya hai\n");
        break;

        default:
        printf("Invalid choice...");
       }
       break;
     
     case 3:
     printf("Internet recharge mate 1 dabavo\n");
     printf("Top up recharge mate 2 dabavo\n");
     printf("Special recharge mate 3 dabavo\n");

     printf("Enter your choice\n");
     scanf("%d",&choice);

     switch(choice){
        case 1:
        printf("Tame safaltapurvak internet recharge kryu che\n");
        break;
        
         case 2:
        printf("Tame safaltapurvak internet recharge kryu che\n");
        break;

         case 3:
        printf("Tame safaltapurvak internet recharge kryu che\n");
        break;
    
        default:
        printf("Invalid choice...");

     }   
     
    }




    }

    