#include <stdio.h>
#include"mensuration.h"

int main() {
    int choice;
    
    printf("Advanced Geometric Calculator\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:{
		 // Rectangle
            float length, width;
            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter width of rectangle: ");
            scanf("%f", &width);
            
            printf("Area of rectangle: %.2f\n", calculateRectangleArea(length, width));
            printf("Perimeter of rectangle: %.2f\n", calculateRectanglePerimeter(length, width));
            break;
		}
           
            
        case 2:{
            // Circle
             float radius;
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            
            printf("Area of circle: %.2f\n", calculateCircleArea(radius));
            printf("Circumference of circle: %.2f\n", calculateCircleCircumference(radius));
            break;
        }
           
            
        case 3:
           {
           	 // Triangle
            float base, height;
            printf("Enter base of triangle: ");
            scanf("%f", &base);
            printf("Enter height of triangle: ");
            scanf("%f", &height);
            
            printf("Area of triangle: %.2f\n", calculateTriangleArea(base, height));
            break;
            
		   }
        case 4:
           {
           	 // Square
            float side;
            printf("Enter side length of square: ");
            scanf("%f", &side);
            
            printf("Area of square: %.2f\n", calculateRectangleArea(side, side)); // Square is a special case of a rectangle
            printf("Perimeter of square: %.2f\n", calculateRectanglePerimeter(side, side));
            break;
		   }
            
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}
