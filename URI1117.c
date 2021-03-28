#include <stdio.h>
 
int main() {
 	
	float nota, soma = 0, media;
	int i = 0;
	
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
    return 0;
}
