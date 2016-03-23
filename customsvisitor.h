#ifndef CUSTOMSVISITOR_H
#define CUSTOMSVISITOR_H

#include "visitor.h"
#include "sunglasses.h"
#include "dvd.h"
#include "watch.h"

class CustomsVisitor : public Visitor
{
public:
    CustomsVisitor();
    ~CustomsVisitor();

    // Overloaded methods for each product
    double visit(Sunglasses* sunglasses);
    double visit(DVD* dvd);
    double visit(Watch* watch);
};

#endif // CUSTOMSVISITOR_H
