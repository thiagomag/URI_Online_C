#include<stdio.h>

int main () {
	
	int codPeca1, qtdPeca1, codPeca2, qtdPeca2;
	float valorPeca1, valorPeca2, valorPago;
	
	scanf("%d" "%d" "%f" "%d" "%d" "%f", &codPeca1, &qtdPeca1, &valorPeca1, &codPeca2, &qtdPeca2, &valorPeca2);
	
	valorPago = (qtdPeca1*valorPeca1) + (qtdPeca2*valorPeca2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", valorPago);
		
	return 0;
}
