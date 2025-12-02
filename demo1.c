#include <stdio.h>

void main() {
    int x;
    printf("Enter the number");
    scanf("%d", &x);
    if (x==0)
        printf("Zero");
    else if (x>0)
        printf("Positive");
    else
        printf("Negative");
}