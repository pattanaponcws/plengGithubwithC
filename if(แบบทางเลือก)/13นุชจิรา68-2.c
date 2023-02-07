#include<stdio.h>

int main(){
    int score;
    printf("Input score : ");
    scanf("%d",&score);
    if(score<50)
        printf("Failes\n");
    
    else
    
        printf("Pass\n");
    
    return 0;
}