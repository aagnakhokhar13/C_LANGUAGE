#include<stdio.h>
#include<string.h>

union demo{
    int id;
    char name[40];
};
int main(){
    union demo d;
    d.id=111;
    strcpy(d.name,"jay");
    printf("ID:-%d\n",d.id);
     printf("NAME:-%s",d.name);
}
