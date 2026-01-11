#include <stdio.h>

int main(){
    int x, y, z; // for int
    printf("enter x, y, z line by line\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("x, y, z = %d, %d, %d\n", x, y, z);

    // 1 -> same values
    printf("Enter different values\n", (x==y) || (x==z) || (y==z));

    // 1 = min
    printf("x = %d\n", (x<y) && (y<z));
    printf("y = %d\n", (y<x) && (x<z));
    printf("z = %d\n", (z<x) && (x<y));

    return 0;
}