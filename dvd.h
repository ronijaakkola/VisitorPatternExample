#ifndef DVD_H
#define DVD_H

#include "product.h"
#include "visitor.h"

class DVD : public Product
{
public:
    DVD(double initialPrice);
    ~DVD();

    double accept(Visitor* visitor);
    double getPrice();

private:
    double price_;
};

#endif // DVD_H
