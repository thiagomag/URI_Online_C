#include<stdio.h>

int main () {
	
	double a, b, c;
	double areaCirculo, areaTriangulo, areaTrapezio, areaQuadrado, areaRetangulo;
	
	scanf("%lf" "%lf" "%lf", &a, &b, &c);

	areaTriangulo = (a * c)/2;
	areaCirculo = 3.14159 * c * c;
	areaTrapezio = ((a + b) / 2) * c;
	areaQuadrado = b * b;
	areaRetangulo = a * b;
	
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo);
	
	return 0;
}
