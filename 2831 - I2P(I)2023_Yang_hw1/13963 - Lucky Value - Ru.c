#include <stdio.h>

int main(void){
    int x,a,b,c,d;
    float LV;
    scanf("%d",&x);
    d = x%10;
    c = x%100/10;
    b = x%1000/100;
    a = x/1000;

    LV = (float)(a+c)/(float)(b+d);
    printf("%.2f\n",LV);
    return 0;
}
