#include <stdio.h>

void check_odd_even(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_odd_even(num);
    
    return 0;
}

//function for check input number is odd or even

void check_odd_even(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

