#include<stdio.h>

void ler5Cartas(int pInt[5]);

char cresc_descr_nulo(int pInt[5]);

int main(void) {
    int vet[5];
    char letra;
    ler5Cartas(vet);
    letra = cresc_descr_nulo(vet);
    printf("%c\n",letra);
    return 0;
}

char cresc_descr_nulo(int pInt[5]) {
    if(pInt[0] < pInt[1] && pInt[1] < pInt[2] && pInt[2] < pInt[3] && pInt[3] < pInt[4]){
        return 'C';
    } else if (pInt[4] < pInt[3] && pInt[3] < pInt[2] && pInt[2] < pInt[1] && pInt[1] < pInt[0]) {
        return 'D';
    } else {
        return 'N';
    }
}

void ler5Cartas(int pInt[5]) {
    int i;
    for (i = 0; i < 5 ; i++){
        scanf("%d", &pInt[i]);
    }
}

