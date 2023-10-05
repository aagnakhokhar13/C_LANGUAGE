#include<stdio.h>
#include<string.h>
void main(){
	char ch1[50],ch2[50];
	printf("Enter the string :-");
	gets(ch1);
	printf("Enter the string :-");
	gets(ch2);
	printf("string = %s",strcat(ch1,ch2));
}
