#ifndef PRODUCT_H
#define PRODUCT_H

#include "visitor.h"

class Product
{
public:
    virtual ~Product() {}

    virtual double accept(Visitor* visitor) = 0;
    virtual double getPrice() = 0;
};

#endif // PRODUCT_H
