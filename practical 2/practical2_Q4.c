#include <stdio.h>

int main() {
//	Q 4

    int distance;
    float fuel, average_consumption;

    printf("Enter distance in km: ");
    scanf("%d", &distance);

    printf("Enter fuel spent in liters: ");
    scanf("%f", &fuel);

    average_consumption = (float) distance / fuel;

    printf("Average consumption (km/lt) = %.3f\n", average_consumption);

    return 0;
}

