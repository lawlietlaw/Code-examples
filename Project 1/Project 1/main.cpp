//
//  main.cpp
//  Project 1
//
//  Created by Mathew Ortiz on 9/12/19.
//  Copyright © 2019 Mathew Ortiz. All rights reserved.
//


//  Retail_Assistant.cpp
//  Retail Sales Assistant Program
//  Programmer:
//  Date:
//  Description:  This program calculates sales tax for a series of products.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double cashDrawer = 100.00;
    int productID = 0;
    int quantity = 0;
    double price = 0.0;
    double subtotal = 0.0;
    double salesTax = 0.0;
    double totalSale = 0.0;
    int anotherSale = 1;
    double taxrate = 0.0;
    
    // Loop for repeat sales
    
    // use a do while loop for to complete this part of the program
   
do
{
   
    // Enter the first Product ID for the first sale (-1 to exit)
    
    cout << "Enter the First Product ID (-1 to exit): ";
    cin >> productID;
    
    // Main loop for each sale
    
    while (productID != -1)
    {
    // enter the quantity
        
        cout << "enter the qunatity: "; // this comes inside the while loop because this makes sure that there is a actual quntatity needed
        cin >> quantity;
        
    // Switch statement to determine the price, and calculate sales tax, if any, for the item.
    switch (productID)
        {
            case 101:
                price = 3.95;
                taxrate = 0.0;
                break;
            case 102:
                price = 1.85;
                taxrate = 0.075;
                break;
            case 103:
                price = 2.49;
                taxrate = 0.075;
                break;
            case 104:
                price = 5.19;
                taxrate = 0.075;
                break;
            case 105:
                price = 4.99;
                taxrate = 0.00;
                break;
            case 106:
                price = 3.25;
                taxrate = 0.075;
                break;
            case 107:
                price = 4.85;
                taxrate = 0.00;
                break;
            case 108:
                price = 3.99;
                taxrate = 0.075;
                break;
            case 109:
                price = 1.99;
                taxrate = 0.00;
                break;
            case 110:
                price = 5.25;
                taxrate = 0.075;
                break;
                
            
            
            default:
                cout << "ERROR Invalid Entry product ID must be between 101 and 110" << endl;
                price = 0.0;
                quantity = 0.0; // these values help to stop the values that are entered from carrying over
        }
    
        // add to subtotal and sales tax
        
    subtotal += quantity * price;
    salesTax += taxrate * quantity * price;
    
    // Get next Product ID
    
    cout << "Enter next product ID (-1 to exit):  ";
    cin >> productID;
    
    
}// End main loop for this sale

    totalSale = subtotal + salesTax;
    
    
    
    // Print properly formatted receipt (Subtotal, Tax, Total Sale) for each sale
    cout << endl<< "subtotal:  $" << fixed << setw(8) << setprecision (2) << subtotal << endl; // setw command is in place in order to give a even read out of the numbers
    cout << "sales tax: $" << fixed << setw(8) << setprecision(2) << salesTax << endl;
    cout << endl << "total sale: $ " << setw(6) << setprecision(2) << totalSale << endl << endl;
    
    
    // Add total sale to the cashdrawer
    
    cashDrawer += totalSale;
    
    
    // Reset for next sale
    subtotal = 0;
    salesTax = 0;
    totalSale = 0;
    
    
    // Another sale?
    cout << "would you like to complete another sale enter 1 if not enter 0: ";
    cin >> anotherSale;
        
    // End loop for repeat sale
    
    // while loop for the do while loop
    
} while (anotherSale != 0);
    
    // Display how much is in the cash drawer at the end
    cout << "Cash drawer total: $" << setw(8) << setprecision(2) << cashDrawer << endl;
    
}
