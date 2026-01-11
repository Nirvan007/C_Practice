#include "stdio.h"

int main(){
    // 1=true, 0=false
    
    // a
    int sunday = 1;
    int snowing = 1;
    printf("%d\n",sunday && snowing);

    // b
    int monday = 1;
    int raining = 0;
    
    printf("%d\n", monday || raining);

    // c
    int num;

    printf("enter a num: ");
    scanf("%d", &num);

    printf("%d\n", (num > 9) && (num < 100));
    return 0;
}