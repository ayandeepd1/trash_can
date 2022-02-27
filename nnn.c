#include<stdio.h>
int main(){
    printf("enter 2 numbers with space in between: ");
    float a_f,b_f;
    scanf("%f %f", &a_f, &b_f);
    int a=a_f, b=b_f;
    if(a==b){
        printf("both are equal");
    }
    else if(a<b){
        printf("second is greater than first");
    }
    else{
        printf("first is greater than second");
    }
}