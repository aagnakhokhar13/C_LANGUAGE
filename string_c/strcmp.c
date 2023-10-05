#include<stdio.h>
#include<string.h>
void main(){
	char ch1[20] , ch2[20];
	printf("Enter the string :-");
	gets(ch1);
	printf("Enter the string :-");
	gets(ch2);
	
	if(strcmp(  ch1, ch2)==0){
		printf("Both string are compare");
	}else{
		printf("Both string are not compare");	
	}
}
