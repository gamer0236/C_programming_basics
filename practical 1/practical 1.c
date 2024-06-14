#include <stdio.h>


float circleperimeter(int radius);
float circlearea(int radius);

int main(){
	
	// Q 1 
	
	
	
	// Q 2
	
	printf("You are 10 years old.You are too young to play the game\n\n");
	
	// Q 3
	
	printf("*****\n*****\n*****\n*****\n\n");
	
	// Q 4 
	
	printf("######\n#\n#\n#####\n#\n#\n#\n\n");
	
	// Q 5
	
	printf("  #####\n ##  ##\n#\n#\n#\n#\n#\n ##  ##\n  #####\n\n");
	
	// Q 6
	
	printf("*********\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*********\n\n");
	printf("   ***   \n *     * \n*       *\n*       *\n*       *\n*       *\n*       *\n *     * \n   ***   \n\n");
	printf("  *  \n *** \n*****\n  *  \n  *  \n  *  \n  *  \n  *  \n  *  \n\n");
	printf("     *     \n   *   *   \n  *     *  \n *       * \n*         *\n *       * \n  *     *  \n   *   *   \n     *     \n\n\n");
	
	//Q 7
	
	printf("S   SSSS\nS   S  S\nSSSSS  S\n\n");
	printf("A\n A\n  A\n  AA\n  A A\n  A  A\n  A A\n  AA\n  A\n A\nA\n\n");
	printf("DDDDDDDD\nD      D\nD      D\n D    D \n  DDDD  \n\n\n");
	
	//Q 8
	
	printf("********\n");
	printf(" ********\n");
	printf("********\n");
	printf(" ********\n");
	printf("********\n");
	printf(" ********\n");
	printf("********\n");
	printf(" ********\n");
	
	//Q 9
	
	//variable declaration for height and width of rectangle
	
	int height;int width;
	
	printf("Perimeter of Rectangle = %d\n",perimeter(7,5));
	printf("Area of Rectangle = %d\n\n",area(7,5));
	
	// Q 10

	//variable declaration for radius of circle
	
	int radius;
	
	printf("Perimter of circle:- %.2f\n",circleperimeter(6));
	printf("Area of circle :- %.2f\n\n",circlearea(6));
	
	// Q 11
	
	int sum;
	
	sum = 2 + 5 + 6;
	
	printf("%d\n\n",sum);
	
	// Q 12
	
	int differnce;
	
	differnce = 10 - 4;
	
	printf("%d\n\n",differnce);		

	// Q 13
	
	int product;
	
	product = 20 * 15;
	
	printf("%d\n\n",product);
	
	// Q 14
	
	float division;
	
	division = 64.0 / 8.0;
	printf("%.2f",division);
	

	return 0;


}





// perimeter function for Q 9

int perimeter(int height,int width){
	int perimeter;
	perimeter = (height + width) * 2;
	return perimeter;
	
}
//area function for Q 9

int area(int height,int width){
	int area;
	area = height * width;
	return area;
	
}

//perimeter function for Q 10

float circleperimeter(int radius){
	
	float circle_perimeter;
	
	circle_perimeter = 2 * 3.14 * radius;
	return circle_perimeter;
	
}

//area function for Q 10
float circlearea(int radius){
	
	float circle_area;
	
	circle_area = 22 / 7.0 * radius * radius;
	return circle_area;
}


