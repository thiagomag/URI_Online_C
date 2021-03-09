/**#include <stdio.h>

int main(void) {
	int i, j;

	for(i = 1; i < 39; i++) printf("-");
	printf("-");
	for(j = 0; j < 5; j++) {
		printf("\n");
		for(i = 1; i <= 39; i++){
			if(i == 1) printf("|");
			printf(" ");
			if(i == 37) printf("|");
		}
	}
	printf("\n");
	for(i = 1; i < 39; i++) printf("-");
	printf("-");
	printf("\n");
}**/

#include <stdio.h>

int main(void) {
    printf("---------------------------------------\n");
    printf("|%38s\n", "|");
    printf("|%38s\n", "|");
    printf("|%38s\n", "|");
    printf("|%38s\n", "|");
    printf("|%38s\n", "|");
    printf("---------------------------------------\n");
    
}
