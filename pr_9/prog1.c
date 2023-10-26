#include<stdio.h>
void main(){
	FILE *fp1;
	FILE *fp2;
	int i;

    fp1=fopen("even_file.txt","w");
   fp2=fopen("odd_file.txt","w");
   
   
  

	for(i=50;i<=70;i++)
	{
	
	if(i%2==0)
	  {
	  fprintf(fp1,"Number is even =%d\n",i);	
	 
	  }
else{
	fprintf(fp2,"Number is odd =%d\n",i);
    }

	}

   }
	
	 



