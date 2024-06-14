#include <stdio.h>

// Functions

float calculateSum(float a, float b);
float calculateAverage(float a, float b);

int main() {
	//variable declaration
	
    float num1, num2;
    
    printf("Enter 1st number: ");
    scanf("%f",&num1);
    printf("Enter 2nd number: ");
	scanf("%f",&num2);
    
    float sum = calculateSum(num1, num2);
    float average = calculateAverage(num1, num2);
    
    printf("Sum: %f\n", sum);
    printf("Average: %f\n", average);
    
    return 0;
}

//function for calculate sum of two values

float calculateSum(float a, float b) {
    return a + b;
}

//function for calculate Average of two values

float calculateAverage(float a, float b) {
    return calculateSum(a, b) / 2;
}

