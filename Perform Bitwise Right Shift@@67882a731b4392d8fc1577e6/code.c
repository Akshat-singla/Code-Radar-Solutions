#include <stdio.h>
void main(){
    int num,shift;
    scanf("%d %d",&num,&shift);
    int result=num>>shift;
    printf("%d",result);
}