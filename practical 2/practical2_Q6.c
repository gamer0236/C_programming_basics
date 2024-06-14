#include <stdio.h>


int main() {
//  Q 6

    float radius, height, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = 3.14 * radius * radius * height;

    printf("Volume of the cylinder = %.3f cubic units\n", volume);

    return 0;
}

