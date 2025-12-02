#include <stdio.h>

int main() {
    int a = 0, b = 1, c, i;

    printf("First 20 Fibonacci numbers:\n");
    printf("%d %d ", a, b); // print first two numbers

    for(i = 3; i <= 20; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}