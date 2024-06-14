#include <stdio.h>

// Functions for each part of name

void printFirstName();
void printMiddleName();
void printLastName();

// Function for print name inside of the frame
void printFrame();


int main() {
    printFrame();
    return 0;
}

void printFirstName() {
    printf("Senarath Athukoralalage Don |\n");
}

void printMiddleName() {

    printf("\t  Sithum\t      |\n");
}

void printLastName() {
    printf("\t  Ridmal");
}

void printFrame() {
    printf("*******************************\n");
    printf("| ");
    printFirstName();
    printf("| ");
    printMiddleName();
    printf("| ");
    printLastName();
    printf("\t      |\n");
    printf("*******************************\n");
}

