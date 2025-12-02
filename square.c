 #include <stdio.h>
#include <math.h>

// function to check if a number is a perfect square
int isPerfectSquare(int n) {
    int root = (int)sqrt(n);
    return (root * root == n);
}

int main() {
    int num, sq, firstTwo, lastTwo;

    printf("4-digit perfect squares whose first and last two digits are also perfect squares:\n");

    // Loop through numbers whose square is 4 digits
    for (num = 32; num <= 99; num++) {  // sqrt(1000) ≈ 32, sqrt(9999) ≈ 99
        sq = num * num;

        // extract first two digits
        firstTwo = sq / 100;  

        // extract last two digits
        lastTwo = sq % 100;

        // check conditions
        if (isPerfectSquare(firstTwo) && isPerfectSquare(lastTwo)) {
            printf("%d\n", sq);
        }
    }

    return 0;
}
