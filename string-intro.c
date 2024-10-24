#include<stdio.h>

int main(){

    char str[200];

    fgets(str, sizeof(str), stdin);
    fputs(str, stdout);


    return 0;
}