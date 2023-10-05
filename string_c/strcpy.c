#include<stdio.h>
#include<string.h>
void main(){
	char ch1[20] , ch2[20];
	printf("Enter the string :-");
	gets(ch1);
	printf("Ans = %s\n",strcpy(ch2,ch1));
	printf("copy ch2 = %s",ch2);
}
