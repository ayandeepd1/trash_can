#include<stdio.h>

void wait_for_user();

int main(){
    printf("enter an option among a, b, c, d: ");
    char c;
    if(scanf("%c", &c)<1)
        printf("invalid input given");
    printf("\n");
    switch (c)
    {
    case 'a':
        printf("a was given");
        break;
    case 'b':
        printf("b was given");
        break;
    case 'c':
        printf("c was given");
        break;
    case 'd':
        printf("d was given");
        break;
    
    default:
        printf("some other was given");
        break;
    }
    wait_for_user();
}

void wait_for_user(){
    printf("\npress enter to exit");
    while (getchar()!='\n'){}
    getchar();    
}