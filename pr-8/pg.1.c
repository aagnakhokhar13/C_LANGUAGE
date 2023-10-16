#include<stdio.h>
int main(){


	char str[20],*p;
	int i,l=0;
	printf("Enter the string :-");
	gets(str);
	
    p=&str;
    for(i=0;*(p+i)!='\0';i++){
    	l=l+1;
	}
	printf("Length of string = %d",l);
		
	}

