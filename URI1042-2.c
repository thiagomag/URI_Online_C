#include<stdio.h>

void ler(int *pA, int *pB, int *pC);

void ordenar(int *pX, int *pY, int *pZ);

int main() {
    int a, b, c, x, y, z;

    ler(&a, &b, &c);
    x = a;
    y = b;
    z = c;
    ordenar(&x, &y, &z);
    printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", x, y, z, a, b, c);
    return 0;
}

void ordenar(int *pX, int *pY, int *pZ) {
    int x, y, z;
    x = *pX;
    y = *pY;
    z = *pZ;
    if (x < y && y < z) {
        *pX = x;
        *pY = y;
        *pZ = z;
    }
    else if (x < z && z < y) {
        *pX = x;
        *pZ = y;
        *pY = z;
    }
    else if (y < x && x < z) {
        *pY = x;
        *pX = y;
        *pZ = z;
    }
    else if (y < z && z < x) {
        *pZ = x;
        *pX = y;
        *pY = z;
    }
    else if (z < x && x < y) {
        *pY = x;
        *pZ = y;
        *pX = z;
    }
    else {
        *pZ = x;
        *pY = y;
        *pX = z;
    }
}

void ler(int *pA, int *pB, int *pC) {
    scanf("%d", &*pA);
    scanf("%d", &*pB);
    scanf("%d", &*pC);
}
