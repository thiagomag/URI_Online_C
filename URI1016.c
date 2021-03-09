#include<stdio.h>

int main () {

	int carroX = 60, carroY = 90, dif, difTempo, distancia, tempo;
	
	dif = carroY - carroX;
	difTempo = 60/dif;
	
	scanf("%d", &distancia);
	
	tempo = difTempo * distancia;

	printf("%d minutos\n", tempo);
	
	return 0;
}
