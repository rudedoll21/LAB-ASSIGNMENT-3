#include <iostream>

    int main() {
      
        double x, y;

       
        std::cout << "Enter the value for x: ";
        std::cin >> x;
        std::cout << "Enter the value for y: ";
        std::cin >> y;

        // pointer variables that point to x and y
        double* xpointer = &x;
        double* ypointer = &y;

        // Adding x and y using the pointer variables
        double sum = *xpointer + *ypointer;

        // Step 5: Display x, y, and the sum
        std::cout << "Value of x: " << x << "\n";
        std::cout << "Value of y: " << y << "\n";
        std::cout << "Sum of x and y: " << sum <<"\n";

      

    }