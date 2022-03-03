#include<stdio.h>
#include<stdint.h>
void wait_for_user();

int main(){
    printf("enter an option to calculate area \n");
    printf("c>circle\ns>square\nr>rectqangle\nz>trapezoid\nenter choice: ");
    char c;
    if(scanf("%c", &c)<1)
        printf("invalid input type given");
    printf("\n");
    double area;
    uint8_t f=0;
    switch (c)
    {
    case 'c':
        printf("enter radius: ");
         float r;
        if(scanf("%f",&r)!=1){
            printf("wrong input type");
            break;
        }
        area=3.1415*r*r;
        f=1;
        break;
    case 's':
        printf("enter one side: ");
         float s;
        if(scanf("%f",&s)!=1){
            printf("wrong input type");
            break;
        }
        area=s*s;
        f=1;
        break;
    case 'r':
        printf("enter length: ");
         float l;
        if(scanf("%f",&l)!=1){
            printf("wrong input type");
            break;
        }
         float w;
        printf("enter breadth: ");
        if(scanf("%f",&w)!=1){
            printf("wrong input type");
            break;
        }
        area=l*w;
        f=1;
        break;
    case 'z':
        printf("enter one base: ");
         float a;
        if(scanf("%f",&a)!=1){
            printf("wrong input type");
            break;
        }
        printf("enter another base: ");
         float b;
        if(scanf("%f",&b)!=1){
            printf("wrong input type");
            break;
        }
        area=(a+b)/2;
        f=1;       
        break;
    
    default:
        printf("input didnt match");
        break;
    }
    if(area<0)
    printf("negative numbers included.(also check if numbers are in range)");
    else if(f)
    printf("area is: %0.3f", area);
    wait_for_user();
}

void wait_for_user(){
    printf("\npress enter to exit");
    while (getchar()!='\n'){}
    getchar();    
}