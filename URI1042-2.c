#include<stdlib.h>
#include<stdio.h>

void ler(int *pA, int *pB, int *pC);

void ordenar(int *pX, int *pY, int *pZ);

int main() {
    int a, b, c, i, x, y, z;

    ler(&a, &b, &c);
    x = a;
    y = b;
    z = c;
    ordenar(&x, &y, &z);
    printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", x, y, z, a, b, c);
    return 0;
}

void ordenar(int *pX, int *pY, int *pZ) {
    int a, b, c;
    if (*pX < *pY && *pY < *pZ) {
        a = *pX;
        b = *pY;
        c = *pZ;
        *pX = a;
        *pY = b;
        *pZ = c;
    }
    else if (*pX < *pZ && *pZ < *pY) {
        a = *pX;
        b = *pZ;
        c = *pY;
        *pX = a;
        *pZ = b;
        *pY = c;
    }
    else if (*pY < *pX && *pX < *pZ) {
        a = *pY;
        b = *pX;
        c = *pZ;
        *pY = a;
        *pX = b;
        *pZ = c;
    }
    else if (*pY < *pZ && *pZ < *pX) {
        a = *pY;
        b = *pZ;
        c = *pX;
        *pY = a;
        *pZ = b;
        *pX = c;
    }
    else if (*pZ < *pX && *pX < *pY) {
        a = *pZ;
        b = *pX;
        c = *pY;
        *pZ = a;
        *pX = b;
        *pY = c;
    }
    else {
        a = *pZ;
        b = *pY;
        c = *pX;
        *pZ = a;
        *pY = b;
        *pX = c;
    }
}

void ler(int *pA, int *pB, int *pC) {
    scanf("%d", &*pA);
    scanf("%d", &*pB);
    scanf("%d", &*pC);
}
