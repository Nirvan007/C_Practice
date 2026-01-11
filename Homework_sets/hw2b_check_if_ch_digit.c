#include <stdio.h>

int main(){
    char ch = '6';
    // 1 = digit, 0 = not a digit
    printf("%d", (ch >= '0') && (ch <= '9'));
    return 0;
}