#include "stdio.h"

int main(){
    printf("a: %d\n", 5 * 2 - 2 * 3);
    printf("b: %d\n", 5 * 2 / 2 * 3); // Associativity Rule - Left to Right (as they are of same precedence)
    printf("c: %d\n", 5 * (2 / 2) * 3);
    printf("d: %d\n", 5 + 2 / 2 * 3);
    return 0;
}