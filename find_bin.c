#include<stdio.h>
int main(){
    int n, b=0;
    scanf("%d", &n);
    while(n>0){
        if(n&1)
            {printf("1");}
        else
            {printf("0");}
        
        n=n>>1;
        }
}