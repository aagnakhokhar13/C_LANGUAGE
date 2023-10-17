#include<stdio.h>
struct emp{
	int id ,salary;
	char name[40];
};
int main(){
	int no,i;
 struct Emp e[50];
 printf("How many record add:-");
 scanf("%d\n",&no);
 for(i=0;i<no;i++){
 	printf("Enter Emp id:-\n");
 	scanf("%d",&e[i].id);
	printf("Enter Emp name:-\n");
 	scanf("%s",&e[i].name);
	printf("Enter Emp salary:-\n");
 	scanf("%d",&e[i].salary);
 }
}






