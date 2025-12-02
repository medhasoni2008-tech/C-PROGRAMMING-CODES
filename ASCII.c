#include <stdio.h>
int main()
{
    int i;

    printf("ASCII codes from 0 to 130:\n\n");
    printf("Code\tCharacter\n");
    printf("-----------------\n");

    for (i = 0; i <= 130; i++) {
        printf("%3d\t%c\n", i, i);
    }

    return 0;
}
