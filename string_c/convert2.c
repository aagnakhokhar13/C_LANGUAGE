#include<stdio.h>
#include<string.h>
void main(){
	char ch[20];
	int i;
	printf("Enter the string :-");
	gets(ch);
	
	for(i=0;i<ch[i]!='\0';i++){
		if(ch[i] >='A' && ch[i] <='Z'){
			ch[i] = ch[i] +32;
		}
	}
	printf("UPPER to LOWER = %s",ch);
}
