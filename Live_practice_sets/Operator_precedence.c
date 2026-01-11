#include "stdio.h"

int main(){
    printf("1: %d\n", 4 + 9 * 10); // * -> + => 4+90 = 94
    printf("2: %d\n", 4 * 3 / 6 * 2); // Associativity Rule - Left to Right (as they are of same precedence)
    // 12/6 * 2 => 2*2 => 4
    return 0;
}