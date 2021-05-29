#include<stdio.h>

void ler(int *pA, int *pB);

int medianaMinima(int a, int b);

int main(void) {
    int a,b,c;
    ler(&a, &b);
    while (a>0 && b>0) {
        int mediana = medianaMinima(a,b);
        printf("%d\n", mediana);
        ler(&a, &b);
    }
    return 0;
}

int medianaMinima(int a, int b) {
    int c = (2 * a) - b;
    return c;
}

void ler(int *pA, int *pB) {
    scanf("%d", &*pA);
    scanf("%d", &*pB);
}
