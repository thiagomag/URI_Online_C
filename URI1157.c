#include <stdio.h>

void listarDivisores(int n);

int main() {
    int n;
    scanf("%d", &n);
    listarDivisores(n);
    return 0;
}

void listarDivisores(int n) {
    int i;
    for (i = 1; i <= n; i++){
        if(n % i == 0) {
            printf("%d\n", i);
        }
    }
}