#include<stdio.h>
void main(){
    int marks;
    char grade;

   
    scanf("%d", &marks);

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks<70 && marks>60){
        grade='D';
    }else {
        grade = 'F';
    }

    printf("%c", grade);
}