#include<stdio.h>

int mail(){
    int score;
    printf("Input score : ");
    scanf("%d",&score);
    if(score<50){
        printf("Failes\n");
    }
    if (score >= 50)
    {
        printf("Pass\n");
    }
    return 0;
}