#include<stdio.h>

int fact(int no);
main(){
	int no,ans;
	printf("Enter the no:-\n");
	scanf("%d",&no);
	ans=fact(no);
	printf("Ans =%d\n",ans);
	
}
int fact(int no){
	if(no==0){
		return 0;
	}else if(no==1){
		return 1;
	}else{
		return no*fact(no-1);
	}
}
