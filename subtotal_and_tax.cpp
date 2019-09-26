#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.13;
    float tax;
    float subTotal;
    float total;
//  Created by: Dylan Hanna
// Created on: Sept 2019
// This program shows how local and global variables work


    // input
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // process
    tax = + subTotal * HST;
    total = subTotal + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}