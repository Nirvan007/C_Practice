#include <stdio.h>

int main(){
    int x;
    printf("enter x: ");
    scanf("%d", &x);

    // even -> 1
    // odd -> 0
    printf("%d\n", (x%2 == 0));
    return 0;
}