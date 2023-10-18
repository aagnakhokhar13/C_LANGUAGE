#include<stdio.h>
#include<string.h>
struct emp {
	int id,age,std;
	char name[50];
	char course[10];
	char school[50];
	char city[15];
};
int main(){
	int no,i;
	 printf("How many record add:-");
     scanf("%d\n",&no);
 for(i=0;i<no;i++){
	struct stud s1[50];

	
	printf("\n------------Print student-------------");
	printf("\n ID:-%d\n",s1.id);
	printf("\n NAME:-%s\n",s1.name);
	printf("\nAGE:-%d\n",s1.age);
	printf("\nStandard:-%d\n",s1.std);
	printf("\nCity:-%s\n",s1.city);
	printf("\nSchool:-%s\n",s1.school);
	
	
}
}
