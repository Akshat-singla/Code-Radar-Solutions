#include <stdio.h>
void main(){
    int num,n;
    scanf("%d %d",&num,&n);
    if(n<0||n>31)
    {
        printf("1");
    }
   int result=num&~(1<<n);
   printf("%d",result);
}