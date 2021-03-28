#include <stdio.h>
 
int main() {
 	
	float nota, soma = 0, media;
	int i = 0, novoCalculo = 1, resposta = 0;
	
	while (novoCalculo == 1) {
		
		i = 0;	
		soma = 0;
		
		while (i < 2) {
			scanf("%f", &nota);
			if (nota >= 0 && nota <= 10){
				soma += nota;
				i++;
			} else {
				printf("nota invalida\n");
			}
		}
		media = soma / i;
		printf("media = %.2f\n", media);
		
		resposta = 0;
		
		while (resposta != 1 && resposta != 2 ){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &resposta);
			if (resposta == 1 || resposta == 2) {
				novoCalculo = resposta;
				media = 0;
			} else {
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &resposta);
			}
		}
	}
	return 0;
}
