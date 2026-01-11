#include <stdio.h>

int main(){
    int x, y, z; // for int
    printf("enter x, y, z line by line\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("x, y, z = %d, %d, %d\n", x, y, z);

    printf("Avg = %f\n", (float)(x+y+z)/3); // explicit type conversion to counter decimal values

    // float x, y, z; // for float
    // printf("enter x, y, z line by line\n");
    // scanf("%f", &x);
    // scanf("%f", &y);
    // scanf("%f", &z);

    // printf("x, y, z = %f, %f, %f\n", x, y, z);

    // printf("Avg = %f\n", (x+y+z)/3);
    return 0;
}