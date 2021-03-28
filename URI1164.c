#include <stdio.h>
 
int main() {

	int i, j, n, x, somaX = 0;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		
		scanf("%d", &x);
		
		for (j=1; j<x; j++){
			if (x % j == 0) {
				somaX += j;
			}
			
		}
		if (somaX == x) {
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }
        
        somaX = 0;
        
	}
}
