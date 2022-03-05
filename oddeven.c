#include<stdio.h>
int main(){
    printf("enter a number: ");
    int a;
    scanf("%d", &a);
    a&=1;
    (a==0)?printf("\neven number"):printf("\nodd number");
    //(a>b)?printf("\na is bigger"):printf("\nb is bigger");

    return 0;
}