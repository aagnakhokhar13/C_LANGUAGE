#include<stdio.h>
void main(){
    sum(10,34,54);
    sum(34,54,67);
}
void sum(int p,int q, int r)
{
   if(p>q && p>r){
    printf("P is max\n");
   
   }else if(q>p && q>r){
    printf("Q is max\n");
   
   }else{
    printf("R is max\n");
   }    


}