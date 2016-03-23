#include "customsvisitor.h"

CustomsVisitor::CustomsVisitor()
{
}

CustomsVisitor::~CustomsVisitor()
{
}

// Sunglasses
// Import tax is 2.9%
// VAT is 24%
double CustomsVisitor::visit(Sunglasses* sunglasses)
{
    double price = sunglasses->getPrice();
    return price + (price * 0.029) + (price * 0.24);
}

// DVD
// Import tax is 3.5%
// VAT is 24%
double CustomsVisitor::visit(DVD* dvd)
{
    double price = dvd->getPrice();
    return price + (price * 0.035) + (price * 0.24);
}

// Watch
// Import tax is constant 0.80€
// VAT is 24%
double CustomsVisitor::visit(Watch* watch)
{
    double price = watch->getPrice();
    return price + 0.80 + (price * 0.24);
}
