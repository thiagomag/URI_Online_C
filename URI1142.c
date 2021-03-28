#include <stdio.h>
 
int main() {
 	
 	int i, n, a, b, c;
 	scanf("%d", &n);
	for (i=0; i<n; i++) {
        a = 1 + (i * 4);
        b = a + 1;
        c = b + 1;
        printf("%d %d %d PUM\n", a, b, c);
	}
        
    return 0;
}
