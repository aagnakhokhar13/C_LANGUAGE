#include <stdio.h>
#include <string.h>
 main()
{
    char ch[30];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;


       printf("\n\nCount total number of alphabets, digits and special characters :\n");
       	
       printf("Enter the string : ");
       
	   fgets(ch, sizeof ,ch );	

    
	    while(ch[i]!='\0')
    {
        if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
        {
            alp++;
        }
        else if(ch[i]>='0' && ch[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}
