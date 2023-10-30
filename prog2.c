#include<stdio.h>
int main(){
	int n1,n2,choice;
	printf("Enter the n1:-");
	scanf("%d",&n1);
	printf("Enter the n2:-\n");
	scanf("%d",&n2);
	if(n1>n2)
	{
		printf("n1 is maximum number\n");
	}
	else
	{
		printf("n2 is maximum number\n");
		
	}
	printf("Enter your choice\n");
	scanf("%d",&choice);
	
	switch(choice){

		case 1:
		    printf("n1 is max");
			break;
			
		case 2:
			printf("n2 is max");
			break;	
		
	}
}
