#include "dvd.h"

DVD::DVD(double initialPrice):
    price_(initialPrice)
{
}

DVD::~DVD()
{
}

double DVD::accept(Visitor* visitor)
{
    return visitor->visit(this);
}

double DVD::getPrice()
{
    return price_;
}
