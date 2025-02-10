#include <stdio.h>
    int flsb(int num){
    if (num==0)
    printf("-1");
    int position=0;
    while((num&1)==0){
    num=num>1;
    position++;
}
return position;
}

int main(){
    int num,position;
    scanf("%d",&num);
    position=flsb(num);
    if(position==-1)
    printf("0");
    else
    printf("1");

    return 0;
}
