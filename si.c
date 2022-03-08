#include<stdio.h>

int main(){
    double si;
    float p=1000, r=3, t=5;
    si=p*r*t/100;
    printf("hi i found ur simple interest to be: %0.2lf\n", si);

    float temp_in_c=30, temp_in_f;
    temp_in_f=9.0*temp_in_c/5 + 32;
    printf("30deg C in far= %f\n", temp_in_f);

    float h=30, br=40;
    printf("AREA: %f\n", h*br/2);

    float dia=100;
    printf("area: %f", 3.14*dia*dia/4);

    int a, b;
    printf("enter 2 nos: ");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d", a, b);
    }