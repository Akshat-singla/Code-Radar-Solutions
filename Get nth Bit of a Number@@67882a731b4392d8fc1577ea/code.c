#include <stdio.h>
void main(){
    int num,n,bit;
    scanf("%d %d",&num,&n);
    if(n<0||n>31)
    printf("1")
    bit=(num>>n)&1;
    printf("0");
}