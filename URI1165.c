#include <stdio.h>
 
int main() {

	int i, j, n, x, primo;
	
	scanf("%d", &n);

	for (i=0; i<n; i++){
		
		scanf("%d", &x);
		
		for (j=1, primo=0; j<x; j++) {
            if ((x % j) == 0) {
                primo += j;
			}
        }
		
		if (primo == 1) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
	}

}
