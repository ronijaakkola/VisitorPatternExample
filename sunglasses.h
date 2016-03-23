#ifndef SUNGLASSES_H
#define SUNGLASSES_H

#include "product.h"
#include "visitor.h"

class Sunglasses : public Product
{
public:
    Sunglasses(double initialPrice);
    ~Sunglasses();

    double accept(Visitor* visitor);
    double getPrice();

private:
    double price_;
};

#endif // SUNGLASSES_H
