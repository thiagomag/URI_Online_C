#include <stdio.h>
 
int main() {
 	
	int m, n;
		
	while(m != n) {
		scanf("%d", &m);
		scanf("%d", &n);
		if (n > m) {
        	printf("Crescente\n");
    	} else if (m > n){
        	printf("Decrescente\n");
        }
	}
	
    return 0;
}
