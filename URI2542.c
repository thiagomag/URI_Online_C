#include <stdio.h>
 
int main() {
 
	int i, j, n, m, l, atr, cm, cl, x, y;
 
 	while(scanf("%d", &n) == 1) {
	
		scanf("%d", &m);
		scanf("%d", &l);
	
	 	int acm[m][n], acl[l][n];
		
	 	for (i=0; i<m; i++){
	 		for (j=0; j<n; j++){
	 			scanf("%d", &acm[i][j]);
			}
		}
		
		for (i=0; i<l; i++){
			for (j=0; j<n; j++){
		 		scanf("%d", &acl[i][j]);
			}
		}
		
		scanf("%d", &cm);
		scanf("%d", &cl);
		scanf("%d", &atr);
		
		x = acm[(cm-1)][(atr-1)];
		y = acl[(cl-1)][(atr-1)];
		
		if(x > y){
	 		printf("Marcos\n");
		} else if(x < y) {
			printf("Leonardo\n");
		} else {
			printf("Empatè\n");
		}
	}
	
    return 0;
}
