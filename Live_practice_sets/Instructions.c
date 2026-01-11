#include "stdio.h"
#include "math.h"

int main(){
    // Type declaration instructions
    // Valid
    int a = 22;
    int b = a;

    int c = b+1;
    int d = 1, e;

    // Invalid
    // int old_age = 22;
    // int new_age = old_age + years; // Invalid used before declaration
    // int years = 2;

    // valid
    int old_age = 22;
    int years = 2;
    int new_age = old_age + years; // valid used after declaration
    
    // Valid
    int x, y, z;
    x = y = z = 4;

    // int x = y = z = 4; Invalid

    // Arithmetic Instructions
    int i = 1, j = 2;
    int sum = i+j;
    int multi = i*j;

    int g, h = i*j; // x won't take the value (only 1 var on LHS)

    // valid
    int num2, num3;
    int num1 = num2 + num3;

    // valid
    int num4, num5, num6;
    // num5 + num6 = num4; // invalid

    int num_base = 3, num_pow = 2; 
    printf("base raise to pow: %f\n", pow(num_base, num_pow));

    printf("Remainder=%d\n", 12%10);

    // printf("Remainder=%d\n", 1.2%1.0); // Invalid - floats not allowed

    printf("Remainder=%d\n", -8%3);

    printf("Remainder=%d\n", 8%-3);

    // Type conversion

    printf("int * int, Output=%d ->int\n", 2*2);

    printf("int * float, Output=%f ->float\n", 2*2.0);

    printf("float * float, Output=%f ->float\n", 2.0*2.0);

    // Special case
    printf("int * int, Output=%d ->int\n", 2/3); // op=0.something
    printf("float * int, Output=%f ->float\n", 2.0/3);
    printf("float * int, Output=%f ->float\n", 3.0/2);

    return 0;
}