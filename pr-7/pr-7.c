#include<stdio.h>
    void add(){
	   int a,b,add;
	printf("Enter the number:-");
	scanf("%d",&a);
	printf("Enter the number:-");
	scanf("%d",&b);
	add=a+b;
	printf("Ans = %d\n",add);
	}
	void sub(){
		int a,b,sub;
	printf("Enter the number:-");
	scanf("%d",&a);
	printf("Enter the number:-");
	scanf("%d",&b);
	sub=a-b;
	printf("Ans = %d\n",sub);
		
	}
	void mul(){
	  int a,b,mul;
	printf("Enter the number:-");
	scanf("%d",&a);
	printf("Enter the number:-");
	scanf("%d",&b);
	mul=a*b;
	printf("Ans = %d\n",mul);
}
      void div(){
      	int a,b,div;
	printf("Enter the number:-");
	scanf("%d",&a);
	printf("Enter the number:-");
	scanf("%d",&b);
	div=a/b;
	printf("Ans = %d\n",div);
    }
	void mod(){
	int a,b,mod;
	printf("Enter the number:-");
	scanf("%d",&a);
	printf("Enter the number:-");
	scanf("%d",&b);
	mod=a%b;
	printf("Ans = %d\n",mod);
}

main(){
	int c,n;
	do{
	
	printf("======================MENU======================\n");
	printf("Press 1 for '+'\n");
	printf("Press 2 for '-'\n");
	printf("Press 3 for '*'\n");
	printf("Press 4 for '/'\n");
	printf("Press 5 for '%'\n");
	printf("Enter your choice\n");
	scanf("%d",&c);
	switch(c){
		case 1:
			add();
			break;
			
		case 2:
			sub();
			break;
			
		case 3:
			mul();
			break;
			
		case 4:
			div();
			break;
			
		case 5:
			mod();
			break;
			
			default:
				printf("You are exited\n");
			
	}
}
while(c !=0);
}
	

