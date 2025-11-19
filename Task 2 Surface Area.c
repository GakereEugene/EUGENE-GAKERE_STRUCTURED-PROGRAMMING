#include <stdio.h>

int main() {
    float radius, surfaceArea;
    const float PI = 3.14159;

    // Input radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate surface area
    surfaceArea = 4 * PI * radius * radius;

    printf("The surface area of the sphere is: %.2f\n", surfaceArea);

    return 0;
}
