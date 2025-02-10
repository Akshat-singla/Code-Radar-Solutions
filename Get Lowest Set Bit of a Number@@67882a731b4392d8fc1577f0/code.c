#include <stdio.h>
#include <math.h>
void main(){
    int num;
    scanf("%d",&num);
    if(num==0)
    printf("0");
    else 
    printf("%d",(int)log2(num & -num));
}

