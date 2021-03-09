#include <stdio.h>
 
int main() {
 
    printf("%8s\n", "A");
    printf("%7s%2s\n", "B", "B");
    printf("%6s%4s\n", "C", "C");
    printf("%5s%6s\n", "D", "D");
    printf("%4s%8s\n", "E", "E");
    printf("%5s%6s\n", "D", "D");
    printf("%6s%4s\n", "C", "C");
    printf("%7s%2s\n", "B", "B");
    printf("%8s\n", "A");
    
    return 0;
}
