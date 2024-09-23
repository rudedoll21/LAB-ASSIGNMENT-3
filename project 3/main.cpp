#include <iostream>

// Define a type alias VEC for a pointer to an int
typedef int* VEC;


// Define a type alias MATRIX for a pointer to a VEC (which is a pointer to an int)
typedef VEC* MATRIX;

int main() {
    //Define an integer variable
    int a = 5;

    //Create a VEC (pointer to int) that points to a
    VEC v = &a;

   //Creating a MATRIX (pointer to VEC) that points to v
    MATRIX m = &v;

    // Step 4: Display the value of a using v and m
    std::cout << "The value of a using v: " << *v <<"\n";
    std::cout << "The value of a using m: " << **m <<"\n";

  
}