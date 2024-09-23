#include <iostream>

// other file contains the main 

// The value of each coin in pennies
extern int quarter;
extern int dime;
extern int nickel;
extern int penny;
int main()
{ // Declare the coin values from the other file using extern
   int input;

    std::cout << "Enter your purchase amount in pennies\n";
    std::cin >> input;
   int change = 100 - input; // We're assuming that the user will enter <=100
   int quarters = change / quarter;
    change %= quarter;

   int dimes = change / dime;
    change %= dime;

   int nickels = change / nickel;
    change %= nickel;

    int pennies = change / penny;

    // result
    std::cout << "Your change is: \n";
    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickels << "\n";
    std::cout << "Pennies: " << pennies << "\n";

   
}