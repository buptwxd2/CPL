#include <stdio.h>


void main(){

    // printf("%d\n", 'a');
    // printf("%d\n", 'a' - '0');
    // printf("%d\n", 'a' - '\0');

    char s[] = "45";
    printf("%d\n", atoi(s));

}

int atoi(char s[]){
    int i, p;

    p = 0 ;

    for(i=0; s[i] != '\0'; i++){
        p = p * 10 + s[i] - '0';
    }

    return p;
}