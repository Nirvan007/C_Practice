#include "stdio.h" // preprocessor directives

int main(){
    float a, b;

    printf("enter a: "); /* tell the user to take the input */
    scanf("%f", &a);

    printf("enter b: "); /* tell the user to take the input */
    scanf("%f", &b);

    printf("Perimeter of the rectangle is: %f\n", 2*(a+b));

    return 0;
}