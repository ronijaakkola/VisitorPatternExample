#ifndef WATCH_H
#define WATCH_H

#include "product.h"
#include "visitor.h"

class Watch : public Product
{
public:
    Watch(double initialPrice);
    ~Watch();

    double accept(Visitor* visitor);
    double getPrice();

private:
    double price_;
};

#endif // WATCH_H
