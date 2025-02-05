#include <stdio.h>
void main(){
    char name[50];
    int age[50];
    char hobby[50];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);

    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
}