#include<stdio.h>

int main () {
	
	int nFuncionario, horaTrabalhada;
	float valorHora, salario;
	
	
	scanf("%d" "%d" "%f", &nFuncionario, &horaTrabalhada, &valorHora);
	
	salario = valorHora * horaTrabalhada;
	
	printf("NUMBER = %d\n", nFuncionario);
	printf("SALARY = US$ %.2f\n", salario);
	
	
	return 0;
}
