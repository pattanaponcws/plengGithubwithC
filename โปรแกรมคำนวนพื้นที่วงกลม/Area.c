#include<stdio.h>
int main(){
    float area,r;
    printf("********************************\n");
    printf("    PROGRAM : Area of circle    \n");
    printf("********************************\n");
    printf("Input radius : ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of circle = %.2f\n" , area);
    printf("********************************\n");

    return 0;


}