#include<stdio.h>
#include<string.h>
main(){
	 char ch[20];
	printf("Enter the string :-\n");
	gets(ch);
	
	printf(" lower to upper %s",strupr(ch));
}
