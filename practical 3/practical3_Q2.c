#include <stdio.h>

// Functions

void printName();
void printAddress();
void printTelephone();

int main() {
    printName();
    printf("\n\n");
    printAddress();
    printf("\n\n");
    printTelephone();
    
    return 0;
}

void printName() {
	
    // Using various escape characters to separate first and last name
    
    printf("Sithum\bRidmal\n");  // \b - backspace
    printf("Sithum\fRidmal\n");  // \f - form feed
    printf("Sithum\nRidmal\n");  // \n - newline
    printf("Sithum\rRidmal\n");  // \r - carriage return
    printf("Sithum\tRidmal\n");  // \t - horizontal tab
    printf("Sithum\aRidmal\n");  // \a - alert (beep)
}

void printAddress() {
    printf("48/1,\nKelanimulla, Angoda\n");
}

void printTelephone() {
    printf("070-1029855\n");
}

