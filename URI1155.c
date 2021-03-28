#include <stdio.h>
 
int main() {
 	
 	int i;
	double s = 0.0, x;
	for (i=1; i<=100; i++) {
		x = (1.0/i);
		s += x;
	}
    printf("%.2lf\n", s);
    return 0;
}
