#include <stdio.h>
 
int main() {
 
    printf("---------------------------------------\n");
    printf("|%0s%32s\n", "x = 35", "|");
    printf("|%38s\n", "|");
    printf("|%21s%17s\n", "x = 35", "|");
    printf("|%38s\n", "|");
    printf("|%37s%0s\n", "x = 35", "|");
    printf("---------------------------------------\n");
    
    return 0;
}
