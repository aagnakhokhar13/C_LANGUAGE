#include<stdio.h>
struct student{

int rno;
char name[50];
int phy_mrks;
int chem_mrks;
int maths_mrks;
float per;
};
main(){
	FILE *marksheet;
	marksheetFILE= fopen("info.txt","w");
	
	if(marksheet ==NULL){
		printf("Error opening file.\n");
		return 1;
	}
	struct student students[5];
	
	printf("Enter marks out of 100");
	int i;
	for(i=0;i<5;i++){
		printf("Details of student %d\n"i+1);
		
		printf("Roll no:-");
		scanf("%d",&student[i].rno);
		printf("Name:-");
		scanf("%s",&student[i].name);
		printf("Physics marks:-");
		scanf("%d",&student[i].phy_mrks);
		printf("Chemistry marks:-");
		scanf("%d",&student[i].chem_mrks);
		printf("Maths marks:-");
		scanf("%d",&student[i].maths_mrks);
		
		students[i].percentage=(students[i],phy_mrks + students[i].chem_mrks + students[i].maths_mrks)/3.0;
		
       
	    printf("---------------------------\n");
	    fprintf(marksheetFILE,"Details of student:-",i+1);
		fprintf(marksheetFILE,"RNO:-%d\n",student[i].rno);
		fprintf(marksheetFILE,"NAME:-%d\n",student[i].name);
		fprintf(marksheetFILE,"PHYICS:-%d\n",student[i].phy_mrks);
		fprintf(marksheetFILE,"CHEMISTRY:-%d\n",student[i].chem_mrks);			
		fprintf(marksheetFILE,"MATHS:-%d\n",student[i].maths_mrks);
		fprintf(marksheetFILE,"PERCENTAGE:-%2f\n",student[i].percentage);
		fprintf("\n");
		|
	}
	fclose(markSheetFILE);
	
	printf("\n Marks Sheet generated and saved in mark_sheet.txt\n");
}
