#include<stdio.h>
#include<stdbool.h>

int main(){
    float x=5,y=8,r=2,t=3;
    bool result2,result3;
    printf("%.0f+%.0f>%0.f*%0.f is ",x,y,t,r);
    if (x+y>t*r)
    {
        printf("TRUE");
    }
    else
        printf("FALSE");
    
    printf("\n%.0f/%.0f<%.0f-%.0f && %.0f-%.0f == %.0f is ",y,r,x,r,y,t,x);
    if (y/r<x-r && y-t == x)
    {
        printf("TRUE");
    }
    else
        printf("FALSE");
    printf("\n%.0f/%.0f*%.0f<=%.0f*%.0f/%.0f-%.0f is ",y,r,x,x,t,x,r);
    if (y/r*x<=x*t/x-r)
    {
        printf("TRUE");
    }
    else
        printf("FALSE");
    

    return 0;
}