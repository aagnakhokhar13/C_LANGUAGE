#include<stdio.h>
main(){
    int x=6;
    int y=8;
    int z=5;
    int ans;
    printf("x =%d",x);
    printf("y =%d",y);
    printf("z =%d",z);
   
    ans=(x*x)+(y*y)+(z*z) +(2*x*y)+(2*y*z)+(2*z*x);
    printf("ans = %d",ans);

}