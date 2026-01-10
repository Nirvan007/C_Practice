#include "stdio.h"

int main(){
    // printf("Hello, World!");

    int a, b;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    int sum = a+b;

    printf("sum is %d\n", sum);

    printf("a+b is %d\n", a+b);
    
    
    return 0;
}