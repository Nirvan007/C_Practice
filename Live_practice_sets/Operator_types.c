#include "stdio.h"

int main(){
    // Return 0 if false and 1 if true

    // Relational Operators
    printf("4=3? %d\n", 4 == 3);
    printf("4=4? %d\n", 4 == 4);
    printf("4>4? %d\n", 4 > 4);
    printf("4>=4? %d\n", 4 >= 4);
    printf("4>3? %d\n", 4 > 3);
    printf("4!=3? %d\n", 4 != 3);
    printf("4!=4? %d\n", 4 != 4);

    // Logical Operators
    printf("4>3 and 5>2 %d\n", (4 > 3) && (5 > 2)); // AND
    printf("4>3 and 2>5 %d\n", (4 > 3) && (2 > 5)); // AND
    printf("4>3 and 2>5 %d\n", (4 > 3) || (2 > 5)); // OR
    printf("4>3 and 2>5 %d\n", (4 > 3) && !(2 > 5)); // NOT

    // Assignment operator for +,-,*/,% (Shorthand operators)
    int x=1, y=1;
    printf("x = x + 1; %d\n", (x = x + 1)); // long
    printf("y += 1; %d\n", (y += 1)); // short
    return 0;
}