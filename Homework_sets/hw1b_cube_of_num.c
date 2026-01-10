#include "stdio.h" // preprocessor directives

int main(){
    float n; // number

    printf("enter n: "); /* tell the user to take the input */
    scanf("%f", &n); // take the input

    printf("Cube of the number is: %f\n", n*n*n); // print the output cube
    
    return 0; // return 0 as the function is int
}