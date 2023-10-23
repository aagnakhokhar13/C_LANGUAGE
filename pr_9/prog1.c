#include<stdio.h>
void main(){
	FILE *p;
	FILE *ptr;
	int i;

    p=fopen("even_file.txt","w");
   *ptr=fopen("odd_file.txt","w");
   
   if(p && ptr==NULL){
   	   printf("File is unable to open..");
   }else{
   	   printf("File is succesfully open..");
   }

	for(i=50;i<=70;i++)
	{
	
	if(i%2==0)
	  {
	  fprintf(p,"Number is even =%d\n",i);	
	 
	  }
	
	  if(i%2!=0)
	  {
	 fprintf(ptr,"Number is odd =%d\n",i);	
	 
	  }
	  
	}



