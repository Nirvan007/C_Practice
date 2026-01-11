#include "stdio.h"

int main(){
    // implicit type conv
    int a = 1.999999;
    printf("a=%d\n", a);

    // explicit type conv
    int b = (int)1.999999;
    printf("b=%d\n", b);

    return 0;
}