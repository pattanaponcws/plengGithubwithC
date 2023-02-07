#include<stdio.h>

int main(){
    float a=2,b=3,c=4,d=5,e=6,f=7;
    float result1=a+e/f-b*c,result2=(f-e)*(c/a),result3=a*d/a+e/b,result4=a*(d/(a+e))/b;
    
    printf("1.  %.0f+%.0f/%.0f-%.0f*%.0f = %.2f\n",a,e,f,b,c,result1);
    printf("2.  (%.0f-%.0f)*(%.0f/%.0f) = %.2f\n",f,e,c,a,result2);
    printf("3.  %.0f*%.0f/%.0f+%.0f/%.0f = %.2f\n",a,d,a,e,b,result3);
    printf("4.  %.0f*(%.0f/(%.0f+%.0f))/%.0f = %.2f\n",a,d,a,e,b,result4);
    return 0;
}