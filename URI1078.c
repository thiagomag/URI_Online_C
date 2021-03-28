#include <stdio.h>
 
int main() {
 	
 	int i, n, resultado;
 	scanf("%d", &n);
	for (i=1; i<=10; i++) {
		resultado = n * i;
		printf("%d x %d = %d\n", i, n , resultado);
	}
        
    return 0;
}
