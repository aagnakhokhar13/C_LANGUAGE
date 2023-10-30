#include<stdio.h>
int main(){
	char ch[50],alphabet=0,digit=0,spl=0;
	
	printf("Enter the character:-");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		alphabet++;
	}
	else if (ch>='0' && ch<='9')
	{
		digit++;
	}
	else
	{
		spl++;
	}
}

