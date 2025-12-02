#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}
