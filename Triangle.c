#include<stdio.h>
int main(){
    float area,h,w;
    printf("********************************\n");
    printf("    PROGRAM : Area of triangle    \n");
    printf("********************************\n");
    printf("Input height and width : ");
    scanf("%f %f",&h,&w);
    area = 0.5*h*w;
    printf("Area of circle = %.2f\n" , area);
    printf("********************************\n");

    return 0;
}