#include "watch.h"

Watch::Watch(double initialPrice):
    price_(initialPrice)
{
}

Watch::~Watch()
{
}

double Watch::accept(Visitor* visitor)
{
    return visitor->visit(this);
}

double Watch::getPrice()
{
    return price_;
}
