#include <stdio.h>

void calculate_square(int side);
void calculate_rectangle(int length, int width);

int main() {
    int side, length, width;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    calculate_square(side);
    
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d",&width);
    calculate_rectangle(length, width);
    
    return 0;
}

void calculate_square(int side) {
	
	int Area = side * side;
	int Perimeter = 4 * side;
	 
    printf("Square Area: %d\n",Area);
    printf("Square Perimeter: %d\n",Perimeter);
}


void calculate_rectangle(int length, int width) {
	
	int Area = length * width;
	int Perimeter =  2 * (length + width);
		
    printf("Rectangle Area: %d\n",Area);
    printf("Rectangle Perimeter: %d\n",Perimeter);
}

