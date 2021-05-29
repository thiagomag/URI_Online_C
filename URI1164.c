#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int x);

int main(void) {
    int i,n,num;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d",&num);
        if (ehPerfeito(num))
            printf("%d eh perfeito\n",num);
        else
            printf("%d nao eh perfeito\n",num);
    }
    return 0;
}

bool ehPerfeito(int x){
    int somaX = 0;
    int j;
    for (j=1; j<x; j++){
        if (x % j == 0) {
            somaX += j;
        }
    }
    if (somaX == x) {
        return true;
    } else {
        return false;
    }
}