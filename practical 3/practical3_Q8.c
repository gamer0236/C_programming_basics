#include <stdio.h>

int square(int num);

int main() {
	//variable declaration
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square: %d\n", square(num));
    
    return 0;
}

int square(int num) {
    return num * num;
}

