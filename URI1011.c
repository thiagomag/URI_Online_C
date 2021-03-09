#include<stdio.h>

int main () {
	
	int raio;
	double volume;
	
	scanf("%d", &raio);
	
	volume = (4.0/3) * 3.14159 * raio * raio * raio;
	
	printf("VOLUME = %.3lf\n", volume);
		
	return 0;
}
