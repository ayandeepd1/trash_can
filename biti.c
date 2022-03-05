#include<stdio.h>

void waiting(){
    while (getchar()!='\n'){}
    getchar();    
}

int main(){
    int a,b,c;
    printf("enter value of a and b with space: ");
    if(scanf("%d %d", &a, &b)<2){
        printf("\nwrong input type");
        waiting();
        return 0;
    }

    c=a&b;
    printf("\nthe bitwise AND on %d and %d= %d", a, b, c);
    c=a|b;
    printf("\nthe bitwise OR on %d and %d= %d", a, b, c);
    c=a^b;
    printf("\nthe bitwise XOR on %d and %d= %d", a, b, c);
    printf("\nthe bitwise NEGATION on %d and %d= %d %d", a, b, ~a, ~b);
        
}