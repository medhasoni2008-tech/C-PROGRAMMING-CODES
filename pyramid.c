#include <stdio.h>

void main()
{
    int i, j, space;
    for(i = 1; i <= 5; i++)
    {
        for(space = i; space < 5; space++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}