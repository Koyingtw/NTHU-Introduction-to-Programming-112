#include<stdio.h>

int main(void){
    unsigned int x;
    double years1;
    float years2;
    unsigned long long sec;
    scanf("%u",&x);
    years1 = (double)x/365;
    years2 = (float)x/365;
    sec = (unsigned long long)x*24*3600;
    printf("%lf %.6f %llu\n",years1,years2,sec);
    return 0;
}
