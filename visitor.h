#ifndef VISITOR_H
#define VISITOR_H

class Sunglasses;
class DVD;
class Watch;

class Visitor
{
public:
    virtual ~Visitor() {}

    virtual double visit(Sunglasses* sunglasses) = 0;
    virtual double visit(DVD* dvd) = 0;
    virtual double visit(Watch* watch) = 0;
};

#endif // VISITOR_H
