#include<stdio.h>

int main(void){
    char s[5];
    scanf("%s",s);
    for(int i=0;i<5;i++){
        s[i] = 187-s[i]; 
    }
    printf("%s\n",s);
    return 0;
}
