#include <stdio.h>

int larger(int a, int b);

int main() {
	//variable declaration
    int num1, num2;
    
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
	scanf("%d",&num2);
    printf("Larger number: %d\n", larger(num1, num2));
    
    return 0;
}

int larger(int a, int b) {
	if(a > b){
		return a;
	}else{
		return b;
	}
}


