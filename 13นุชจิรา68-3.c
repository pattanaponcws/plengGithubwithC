#include<stdio.h>

int mail(){
    int score;
    printf("Input score : ");
    scanf("%d",&score);
    if(score<50)
        printf("0");
    else if(score <60)
        printf("1");
    else if(score < 70)
        printf("2");
    else if (score <80)
        printf('3');
    else
        printf('4');
    
    return 0;
}