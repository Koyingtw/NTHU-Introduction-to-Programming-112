#include <stdio.h>

int main(void){
    char p[6];
    scanf("%s",p);
    int num;
    int asc;
    num = (p[1] - '0')*16+(p[2] - '0')*8+(p[3] - '0')*4+(p[4] - '0')*2+(p[5] - '0');
    asc = 64 + num +32*(p[0] - '0');
    printf("%c\n",asc);
    return 0;
}
