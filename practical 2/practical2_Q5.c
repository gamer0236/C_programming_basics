#include <stdio.h>

int main() {
//	Q 5

    float side, volume;

    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    volume = side * side * side;

    printf("Volume of the cube = %.3f cubic units\n", volume);

    return 0;
}

