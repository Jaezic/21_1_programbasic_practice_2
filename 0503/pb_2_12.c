#include <stdio.h>

int square(int y);

void main(){
    int x;
    for(x=1; x<=10; ++x)
        printf("%d", square(x));
    puts(" ");
}

int square(int y){
    return y+y;
}