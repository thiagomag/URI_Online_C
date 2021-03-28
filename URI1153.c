#include <stdio.h>
 
int main() {
 	
 	int i, n;
 	scanf("%d", &n);
	for (i=n; i>2; i--) {
		n *= (i - 1);
	}
    printf("%d\n", n);
    return 0;
}
