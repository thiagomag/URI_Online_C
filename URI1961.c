#include <stdio.h>
#include <stdlib.h>
 
int main() {

	int i, n, p;
	
	scanf("%d %d", &p, &n);
	
	int c[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &c[i]);
	}
	
	for(i=1; i<n; i++){
	
		if(c[i] < c[i-1]) {
			if ((c[i-1] - c[i]) > p) {
				printf("GAME OVER\n");
				exit(0);
			}
		} else if (c[i] > c[i-1]) {
			if((c[i]- c[i-1]) > p){
				printf("GAME OVER\n");
				exit(0);
			}
		}	
	}
	printf("YOU WIN\n");
	return 0;
}
