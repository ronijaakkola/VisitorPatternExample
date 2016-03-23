/* Example program for assignment of Tampere University
 * of Technology course Software Architecture
 * ----------------------------------------------------
 * Roni Jaakkola
 * ----------------------------------------------------
 * The example demonstrates how Visitor Design Pattern
 * works in practice. The program calculates real
 * prices for products by taking Finnish customs taxes
 * into account. Products only know their initial
 * prices and the Visitor class adds functionality on
 * top of them to calculate the real price.
*/

#include <iostream>

using namespace std;

#include <customsvisitor.h>
#include <sunglasses.h>
#include <dvd.h>
#include <watch.h>

int main()
{
    cout << "-- Visitor Design Pattern demo --" << endl << endl;

    // Create Visitor
    CustomsVisitor* customsVisitor = new CustomsVisitor();

    // Create Products
    Product* sunglasses = new Sunglasses(50.0);
    Product* dvd = new DVD(15.5);
    Product* watch = new Watch(200.0);

    // Get the final prices via using the Visitor class
    cout << "FINAL PRICES FOR THE PRODUCTS" << endl;
    cout << "Sunglasses price: " << sunglasses->accept(customsVisitor) << "e" << endl;
    cout << "DVD price: " << dvd->accept(customsVisitor) << "e" << endl;
    cout << "Watch price: " << watch->accept(customsVisitor) << "e" << endl;

    // Free resources
    delete customsVisitor;
    delete sunglasses;
    delete dvd;
    delete watch;

    return 0;
}

