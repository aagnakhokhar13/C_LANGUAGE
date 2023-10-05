#include<stdio.h>
#include<string.h>
void main(){
	char ch[20];
	int i;
	printf("Enter the string :-");
	gets(ch);
	
	for(i=0;i<ch[i]!='\0';i++){
		if(ch[i] >='a' && ch[i] <='z'){
			ch[i] = ch[i] -32;
		}
	}
	printf("lower to upper = %s",ch);
}
