#include<stdio.h>
#include<string.h>
main(){
	char ch[30],n;
	int i,j=0;
	printf("Enter the string :-");
	gets(ch);
	
	printf("Enter the character you want to count :-");
    scanf("%c",&n);
	
	for(i=0;i<ch[i]!='\0';i++)
	{
	   if(ch[i]==n){
	   	j++;
	   }	
	   printf("\n Total = %d",j);
	}
}

