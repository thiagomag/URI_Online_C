#include<stdio.h>


int main () {
	
	int a, b;
	float total;
	
	scanf("%d %d", &a, &b);
	
	switch (a){
	
		case 1: {
			total = b * 4.00;
			printf("Total: R$ %.2f\n", total);
			break;
		}
			
		case 2: {
			total = b * 4.50;
			printf("Total: R$ %.2f\n", total);
			break;
		}

		case 3: {
			total = b * 5.00;
			printf("Total: R$ %.2f\n", total);
			break;
		}

		case 4: {
			total = b * 2.00;
			printf("Total: R$ %.2f\n", total);
			break;
		}

		case 5: {
			total = b * 1.50;
			printf("Total: R$ %.2f\n", total);
			break;
		}
	}	
	
	return 0;

}
