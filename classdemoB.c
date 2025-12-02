#include <stdio.h>

int main() {
    char ch;
    printf("Enter the alphabet");
    scanf("%c", &ch);
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabet");
    else
        printf("Not an alphabet");
        return 0;

}
