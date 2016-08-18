#ifndef GRAPHICSRECTANGLE_H
#define GRAPHICSRECTANGLE_H

#include "graphicscomponent.h"

class GraphicsRectangle: public GraphicsComponent
{
public:
    GraphicsRectangle(QString componentName);
    virtual ~GraphicsRectangle(){}
    virtual void print();
};

#endif // GRAPHICSRECTANGLE_H
