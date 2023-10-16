#include<stdio.h>
main(){
	int a=10,b=6;
	swap(&a,&b);
	}
	void swap(int *a ,int *b ){
		int c=*a;
		*a=*b;
		*b=c;
		printf("A =%u\n",*a);
		printf("B =%u\n",*b);
	}
}
