#include <stdio.h>
#include <stdbool.h>

void cresc_descr(int x, int y);

bool ler(int *pX, int *pY);

int main() {

    int x,y;
    while ( ler(&x, &y) )
        cresc_descr(x,y);
    return 0;
}

bool ler(int *pX, int *pY) {
    if(*pX != *pY) {
        scanf("%d", &*pX);
        scanf("%d", &*pY);
        return true;
    } else {
        return false;
    }
}

void cresc_descr(int x, int y) {
    if (y > x) {
        printf("Crescente\n");
    } else if (x > y){
        printf("Decrescente\n");
    }
}
