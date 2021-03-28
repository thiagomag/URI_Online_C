#include <stdio.h>
 
int main() {
 
 	int n, i, maxAnos = 0, cidadeA, cidadeB;
	double crescA, crescB;	
 
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {

		scanf("%d %d %lf %lf", &cidadeA, &cidadeB, &crescA, &crescB);
				
		while (cidadeA <= cidadeB && maxAnos < 101){
			
			cidadeA += (int)((cidadeA*crescA)/100);
			cidadeB += (int)((cidadeB*crescB)/100);
			
			maxAnos++;
		}
		if (maxAnos > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", maxAnos);
        }
        maxAnos = 0;
	} 
}
