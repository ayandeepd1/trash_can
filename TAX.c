#include<stdio.h>
void wait_for_user(); 
int main(){
    printf("enter income:");
    int inc;
    double tax=0;
    scanf("%d", &inc);

    if(inc<9500){tax=0;}
    else if(inc>=9500 && inc<38000){tax=0.12*inc;}
    else if(inc>=38000 && inc<82500){tax=0.22*inc;}
    else{tax=0.32*inc+1000;}
    printf("tax payable: %f", tax);
    wait_for_user();

    return 0;
}

void wait_for_user(){
    while (getchar()!='\n'){}
    getchar();    
}