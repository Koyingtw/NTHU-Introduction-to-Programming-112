#include<stdio.h>

int main(void){
    char s[5];
    scanf("%s",s);
    for(int i=0;i<5;i++){
        s[i] = 187-s[i];    //90-(ascii-32-65)
    }
    printf("%s\n",s);
    return 0;
}
