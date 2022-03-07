#include<stdio.h>

void waiting(){
    printf("\npress enter to exit");
    while (getchar()!='\n'){}
    getchar();    
}

unsigned long long int find_binary(int d){
    if(d==0)
        return 0;
    else if(d==1)
        return 1;
    else 
        return find_binary(d/2)*10 + d%2;
}

int main(){
    int n, m;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("binnary is \t\t\t%8llu", find_binary(n));

    printf("\nenter a number: ");
    scanf("%d", &m);
    printf("binnary is \t\t\t%8llu", find_binary(m));

    printf("\nsetting the bits of 2nd number in 1st:\t %8llu", find_binary(n|m));

    printf("\nclearing the bits of 2nd number in 1st:\t %8llu", find_binary(n&~m));

    printf("\ntoggling the bits of 2nd number in 1st:\t %8llu", find_binary(n^m));
    waiting();
    return 0;
}