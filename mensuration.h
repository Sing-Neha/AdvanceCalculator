#include <math.h>

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
float calculateRectanglePerimeter(float length, float width) {
    return 2 * (length + width);
}

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    return M_PI * radius * radius;
}

// Function to calculate the circumference of a circle
float calculateCircleCircumference(float radius) {
    return 2 * M_PI * radius;
}

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}
