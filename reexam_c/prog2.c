#include<stdio.h>
main(){
    int marks,eng,maths,sci,guj,hindi,per,sum=0;
    printf("Enter the marks 1:-");
    scanf("%d",&eng);
    printf("Enter the marks 2:-");
    scanf("%d",&maths);
    printf("Enter the marks 3:-");
    scanf("%d",&sci);
    printf("Enter the marks 4:-");
    scanf("%d",&guj);
    printf("Enter the marks 5:-");
    scanf("%d",&hindi);
    sum= eng + maths + sci + guj + hindi;
    per=(sum*100)/500;
    printf("percentage=%d\n",per);
    
    if(per>=91 && per<=100){
        printf("A1\n");
    }else if (per>=81 && per<=90){
        printf("A2\n");
    }else if (per>=71 && per<=80){
        printf("B1\n");
    }else if (per>=61 && per<=70){
         printf("B2\n");
    }else if(per>=51 && per<=60){
         printf("C1\n");
    }else if(per>=41 && per<=50){
        printf("C2\n");
    }else if(per>=33 && per<=40){
         printf("D\n");
    }else if(per>=21 && per<=32){
         printf("E1\n");
    }else if(per>=0 && per<=20){
         printf("E2\n");
    }
}