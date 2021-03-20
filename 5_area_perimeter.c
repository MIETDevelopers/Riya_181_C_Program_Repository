//Program to caluclate area and perimeter of circle, Square and Rectangle.
#include<stdio.h>//header file
int main(){
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));//printing area of circle
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));//printing perimeter of circle
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//printing area of square
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));//printing perimeter of square
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));//printing area of rectangle
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));//printing perimeter of rectangle
	return 0;
}
