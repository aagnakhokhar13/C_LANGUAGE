#include<stdio.h>
#include<string.h>
void main(){
	char ch[50];
	printf("Enter the string :-");
	gets(ch);

	printf("string = %s",strupr(ch));
}

