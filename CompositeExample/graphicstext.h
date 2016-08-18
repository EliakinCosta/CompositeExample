#ifndef GRAPHICSTEXT_H
#define GRAPHICSTEXT_H

#include "graphicscomponent.h"

class QString;

class GraphicsText: public GraphicsComponent
{
public:
    GraphicsText(QString componentName);
    virtual ~GraphicsText(){}
    virtual void print();
};

#endif // GRAPHICSTEXT_H
