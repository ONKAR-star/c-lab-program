 #include <iostream>
#include <cmath>  // For M_PI

using namespace std;

// Base class: Shape
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double calculateArea() const = 0;
    
    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class: Square
class Square : public Shape {
private:
    double dimension;  // The side length of the square

public:
    // Constructor to initialize the dimension
    Square(double dim) : dimension(dim) {}

    // Override the calculateArea() function
    double calculateArea() const override {
        return dimension * dimension;  // Area of square: side^2
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double dimension;  // The radius of the circle

public:
    // Constructor to initialize the radius
    Circle(double dim) : dimension(dim) {}

    // Override the calculateArea() function
    double calculateArea() const override {
        return M_PI * dimension * dimension;  // Area of circle: π * radius^2
    }
};

// Main function to demonstrate usage
int main() {
    Shape* square = new Square(4.0);  // Create a Square with side 4
    Shape* circle = new Circle(5.0);  // Create a Circle with radius 5

    // Display the areas
    cout << "Area of square: " << square->calculateArea() << endl;
    cout << "Area of circle: " << circle->calculateArea() << endl;

    // Clean up memory
    delete square;
    delete circle;

    return 0;
}