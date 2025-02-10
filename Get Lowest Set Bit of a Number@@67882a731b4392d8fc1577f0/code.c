#include <stdio.h>
#include <math.h>
void main(){
    int num,pos=0;
    scanf("%d",&num);
    if(num==0)
    printf("0");
    else
    {
        while(!(num&1))
        {
            num>>=1;
            pos++;
        }
        printf("%d",pos);
    }
}

