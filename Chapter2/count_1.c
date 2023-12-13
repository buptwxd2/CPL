#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned);

void main(){
    int num;
    scanf("%d", &num);

    printf("%d\n", bitcount(num));
}


int bitcount(unsigned x){
    int r = 0;

    while (x){
        r++;
        x = x & (x-1);
    }

    return r;
}