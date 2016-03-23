#include "sunglasses.h"

Sunglasses::Sunglasses(double initialPrice):
    price_(initialPrice)
{
}

Sunglasses::~Sunglasses()
{
}

double Sunglasses::accept(Visitor* visitor)
{
    return visitor->visit(this);
}

double Sunglasses::getPrice()
{
    return price_;
}
