#include <stdio.h>

float calculate_area(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = calculate_area(base, height);
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}

