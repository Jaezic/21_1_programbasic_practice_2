#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    for(i =1; i<=20; i++){
        printf("%d\t", 1+ (rand() & 31));
        if(i%5==0)
            puts("");
    }
    return 0;
}