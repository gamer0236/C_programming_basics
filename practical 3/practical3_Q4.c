#include <stdio.h>

void add(int a, int b);
void subtract(int a, int b);
void divide(int a, int b);

int main() {
    int num1, num2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
	scanf("%d",&num2);
    
    add(num1, num2);
    subtract(num1, num2);
    divide(num1, num2);
    
    return 0;
}

//function for add two numbers

void add(int a, int b) {
    printf("Sum: %d\n", a + b);
}

//function for subtract two numbers

void subtract(int a, int b) {
    printf("Difference: %d\n", a - b);
}

//function for divide two numbers

void divide(int a, int b) {
    if (b != 0) {
        printf("Division: %f\n", (float)a / b);
    } else {
        printf("Error: Division by zero.\n");
    }
}

