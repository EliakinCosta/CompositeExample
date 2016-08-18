#ifndef GRAPHICSCOMPOSITE_H
#define GRAPHICSCOMPOSITE_H

#include "graphicscomponent.h"
#include <QList>

class QString;

class GraphicsComposite: public GraphicsComponent
{
public:
    GraphicsComposite(QString componentName);
    virtual ~GraphicsComposite();
    virtual void add(GraphicsComponent *component);
    virtual void remove(QString componentName);
    virtual GraphicsComponent *findChild(QString componentName);
    virtual QList<GraphicsComponent *> *findChildren();
    virtual void print();
private:
    GraphicsComponent *componentByName(QString componentName);
    QList<GraphicsComponent *>  *m_graphics;
};

#endif // GRAPHICSCOMPOSITE_H
