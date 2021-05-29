#include <stdio.h>

int somaImpares(int x, int y);

int main(void) {
    int i,n,x,y;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d",&x,&y);
        printf("%d\n", somaImpares(x,y));
    }
    return 0;
}

int somaImpares(int x, int y) {
    int count = 0;
    int somaImpar = 0;
    while (count < y) {
        if (x % 2 !=0 ){
            somaImpar += x;
            count++;
        }
        x++;
    }
    return somaImpar;
}
