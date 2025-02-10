#include <stdio.h>
void main(){
    int num,n,result;
    scanf("%d %d",&num,&n);
    if(n<0||n>31)
    {
    printf("1");
    }
    result=num^(1<<n);
    printf("%d",result);
}