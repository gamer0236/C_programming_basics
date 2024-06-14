#include <stdio.h>

// Function 

int largest(int a, int b, int c);

int main() {
	//variable declaration
    int num1, num2, num3;
    
    printf("Enter 1st integer: ");
    scanf("%d", &num1);
    printf("Enter 2nd integer: ");
    scanf("%d", &num2);
    printf("Enter 3rd integer: ");
    scanf("%d", &num3);
    
    printf("Largest number: %d\n", largest(num1, num2, num3));
    
    return 0;
}

int largest(int a, int b, int c) {
	
    int max;
    
    if (a > b) {
        if (a > c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }
    
    return max;
}

