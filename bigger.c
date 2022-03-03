#include<stdio.h>
int main(){
    printf("enter 2 numbers with space in between: ");
    
    float a, b;
    
    scanf("%f %f", &a, &b);
    float max= a>b?a:b;
    printf("\n%0.1f is bigger",max);
    (a>b)?printf("\na is bigger"):printf("\nb is bigger");
    return 0;
}