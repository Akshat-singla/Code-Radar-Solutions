// Your code here...
#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=5;i++)
    {
        for( int j=i;j<=a-1;j++)
        printf(" ");
        
    }
    for(int k=1;k<=1;k++){
        printf("*");
    }
    printf("\n");
}