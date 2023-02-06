#include<stdio.h>
int main(){
    float area,h,w;
    printf("********************************\n");
    printf("    PROGRAM : Area of Rectangle    \n");
    printf("********************************\n");
    printf("Input height and width : ");
    scanf("%f %f",&h,&w);
    area = h*w;
    printf("Area of circle = %.2f\n" , area);
    printf("********************************\n");
    ;
    return 0;
}